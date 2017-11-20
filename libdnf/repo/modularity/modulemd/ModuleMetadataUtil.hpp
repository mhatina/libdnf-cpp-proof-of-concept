
#ifndef LIBDNF_MODULEMETADATAUTIL_HPP
#define LIBDNF_MODULEMETADATAUTIL_HPP

#include <string>
#include <vector>

#include "ModuleMetadata.hpp"

class ModuleMetadataUtil
{
public:
    const std::vector<ModuleMetadata *> metadataFromFile(const std::string &filePath);
    const std::vector<ModuleMetadata *> metadataFromString(const std::string &fileContent);

private:
    const std::vector<ModuleMetadata *> wrapModulemdModule(ModulemdModule **modules);
};


#endif //LIBDNF_MODULEMETADATAUTIL_HPP
