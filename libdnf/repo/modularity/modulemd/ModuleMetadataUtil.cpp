extern "C" {
    #include <glib.h>
    #include <modulemd/modulemd-module.h>
};

#include "ModuleMetadataUtil.hpp"

const std::vector<ModuleMetadata *> ModuleMetadataUtil::metadataFromFile(const std::string &filePath)
{
    ModulemdModule **modules = nullptr;
    modulemd_module_new_all_from_file(filePath.c_str(), &modules);

    return wrapModulemdModule(modules);
}

const std::vector<ModuleMetadata *> ModuleMetadataUtil::metadataFromString(const std::string &fileContent)
{
    ModulemdModule **modules = nullptr;
    modulemd_module_new_all_from_string (fileContent.c_str(), &modules);

    return wrapModulemdModule(modules);
}

const std::vector<ModuleMetadata *> ModuleMetadataUtil::wrapModulemdModule(ModulemdModule **modules)
{
    if (modules == nullptr)
        return {};

    std::vector<ModuleMetadata *> moduleCluster;
    for (int i = 0; modules[i] != nullptr; i++) {
        ModulemdModule *modulemd = modules[i];
        moduleCluster.push_back(new ModuleMetadata(modulemd));
    }

    return moduleCluster;
}