
#include "FrontController.hpp"

void FrontController::dispatch(IModuleOperation *operation)
{
    for (ModuleController *controller : clusterController.get(operation->filter)) {
        if (!controller->isModuleCompatible(operation))
            continue;

        controller->execute(operation);
    }
}

void FrontController::dispatch(const std::string &moduleSpec, IModuleOperation *operation)
{
    ModuleController *controller = clusterController.find(moduleSpec);
    dispatch(controller, operation);
}

void FrontController::dispatch(ModuleController *controller, IModuleOperation *operation)
{
    if (!controller->isModuleCompatible(operation))
        throw "Trying to perform incompatible operation";

    controller->execute(operation);
}
