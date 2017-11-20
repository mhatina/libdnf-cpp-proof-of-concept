
#include "ModuleController.hpp"

ModuleController::ModuleController(IModuleElement *element)
    : element(element)
{

}

bool ModuleController::isModuleCompatible(const IModuleOperation *operation) const
{
    return false;
}

void ModuleController::execute(IModuleOperation *operation)
{
    operation->execute(element);
}

IModuleElement *ModuleController::getElement() const
{
    return element;
}
