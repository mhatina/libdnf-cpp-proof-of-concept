
#include "ModuleMaker.hpp"
#include "../modulemd/ModuleMetadataUtil.hpp"
#include "../module/element/ModuleElement.hpp"

std::vector<ModuleController *> ModuleMaker::readYamlFile(std::string &path)
{
    const std::vector<ModuleMetadata *> &moduleMetadata = ModuleMetadataUtil().metadataFromFile(path);
    std::vector<ModuleController *> moduleControllers;

    moduleControllers.reserve(moduleMetadata.size());
    for (ModuleMetadata *item : moduleMetadata) {
        moduleControllers.push_back(new ModuleController(new ModuleElement(item)));
    }

    return moduleControllers;
}

void ModuleMaker::readModuleConfigs(std::string &dir, std::vector<IModuleElement *> &elements)
{
    throw "ModuleMaker::readModuleConfigs not yet implemented";
}

void ModuleMaker::readModuleDefaultsConfigs(std::string &dir, std::vector<IModuleElement *> &elements)
{
    throw "ModuleMaker::readModuleDefaultsConfigs not yet implemented";
}

