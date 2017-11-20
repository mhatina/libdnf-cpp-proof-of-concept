
#ifndef LIBDNF_MODULARITYAPI_HPP
#define LIBDNF_MODULARITYAPI_HPP

#include <memory>
#include <string>
#include <vector>

#include "FrontController.hpp"
#include "operation/OperationHeader.hpp"

class ModularityAPI
{
public:
    ModularityAPI(IFrontController& ctrl);
    //~ModularityAPI();

    void install(const std::vector<std::string> &moduleSpecs);
    void update(const std::vector<std::string> &moduleSpecs);
    void update();
    void remove(const std::vector<std::string> &moduleSpecs);
    void enable(const std::vector<std::string> &moduleSpecs);
    void disable(const std::vector<std::string> &moduleSpecs);
    void lock(const std::vector<std::string> &moduleSpecs);
    void unlock(const std::vector<std::string> &moduleSpecs);
    void printList(const std::vector<std::string> &moduleSpecs/*, ModuleState &state = ModuleState::LATEST*/);
    void printList(/*ModuleState &state = ModuleState::LATEST*/);
    void printInfo(const std::vector<std::string> &moduleSpecs);
    void printProfileContent(const std::vector<std::string> &moduleSpecs);

private:
    void makeOperation(const std::vector<std::string> &moduleSpecs, IModuleOperation *operation);

private:
    std::unique_ptr<IFrontController> frontController;
};


#endif //LIBDNF_MODULARITYAPI_HPP
