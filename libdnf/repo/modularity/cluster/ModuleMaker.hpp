
#ifndef LIBDNF_MODULEMAKER_HPP
#define LIBDNF_MODULEMAKER_HPP


#include <string>

#include "../module/ModuleController.hpp"

class ModuleMaker
{
public:
    std::vector<ModuleController *> readYamlFile(std::string &path);
    void readModuleConfigs(std::string &dir, std::vector<IModuleElement *> &elements);
    void readModuleDefaultsConfigs(std::string &dir, std::vector<IModuleElement *> &elements);
};


#endif //LIBDNF_MODULEMAKER_HPP
