
#ifndef LIBDNF_MODULECLUSTERCONTROLLER_HPP
#define LIBDNF_MODULECLUSTERCONTROLLER_HPP


#include "../module/ModuleController.hpp"
#include "../operation/IModuleOperation.hpp"
#include "ModuleClusterView.hpp"

class ModuleClusterController
{
public:
    ModuleClusterController(ModuleClusterView *view);

    ModuleController *find(const std::string &moduleSpec);
    const std::vector<ModuleController *> get(bool (IModuleOperation::*)(IModuleElement *));
};


#endif //LIBDNF_MODULECLUSTERCONTROLLER_HPP
