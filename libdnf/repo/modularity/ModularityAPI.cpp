#include "ModularityAPI.hpp"

ModularityAPI::ModularityAPI(std::unique_ptr<IFrontController>&& ctrl)
    : frontController{std::move(ctrl)}
{
}

void ModularityAPI::install(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new InstallModuleOperation());
}

void ModularityAPI::update(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new UpdateModuleOperation());
}

void ModularityAPI::update()
{
    IModuleOperation *operation = new UnlockModuleOperation();
    frontController->dispatch(operation);
    delete operation;
}

void ModularityAPI::remove(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new RemoveModuleOperation());
}

void ModularityAPI::enable(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new EnableModuleOperation());
}

void ModularityAPI::disable(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new DisableModuleOperation());
}

void ModularityAPI::lock(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new LockModuleOperation());
}

void ModularityAPI::unlock(const std::vector<std::string> &moduleSpecs)
{
    makeOperation(moduleSpecs, new UnlockModuleOperation());
}

void ModularityAPI::printList(
        const std::vector<std::string> &moduleSpecs/*, ModuleState &state = ModuleState::LATEST*/)
{
    makeOperation(moduleSpecs, new ListModulesOperation(nullptr));
}

void ModularityAPI::printList(/*, ModuleState &state = ModuleState::LATEST*/)
{
    // SmartColsTable *table = new SmartColsTable();

    IModuleOperation *operation = new ListModulesOperation(nullptr);
    frontController->dispatch(operation);
    // std::cout << table;

    delete operation;
    // delete table;
}

void ModularityAPI::printInfo(const std::vector<std::string> &moduleSpecs)
{
    // SmartColsTable *table = new SmartColsTable();
    makeOperation(moduleSpecs, new InfoModuleOperation(nullptr));
    // std::cout << table;
    // delete table;
}

void ModularityAPI::printProfileContent(const std::vector<std::string> &moduleSpecs)
{
    // SmartColsTable *table = new SmartColsTable();
    makeOperation(moduleSpecs, new ProfileContentOperation(nullptr));
    // std::cout << table;
    // delete table;
}

void ModularityAPI::makeOperation(const std::vector<std::string> &moduleSpecs, IModuleOperation *operation)
{
    for (const auto &moduleSpec : moduleSpecs) {
        frontController->dispatch(moduleSpec, operation);
    }

    delete operation;
}
