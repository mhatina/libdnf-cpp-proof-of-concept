
#ifndef LIBDNF_MODULECONTROLLER_HPP
#define LIBDNF_MODULECONTROLLER_HPP


#include "../operation/IModuleOperation.hpp"

class ModuleController
{
public:
    ModuleController(IModuleElement *element);

    bool isModuleCompatible(const IModuleOperation *operation) const;
    void execute(IModuleOperation *operation);

    IModuleElement *getElement() const;

private:
    IModuleElement *element;
};


#endif //LIBDNF_MODULECONTROLLER_HPP
