
#ifndef LIBDNF_FRONTCONTROLLER_HPP
#define LIBDNF_FRONTCONTROLLER_HPP


#include <string>

#include "cluster/ModuleClusterController.hpp"
#include "module/ModuleController.hpp"
#include "operation/IModuleOperation.hpp"
#include "IFrontController.hpp"

class FrontController : public IFrontController
{
public:
    void dispatch(IModuleOperation *operation);
    void dispatch(const std::string &moduleSpec, IModuleOperation *operation);
    void dispatch(ModuleController *controller, IModuleOperation *operation);

private:
    ModuleClusterController clusterController;
};


#endif //LIBDNF_FRONTCONTROLLER_HPP
