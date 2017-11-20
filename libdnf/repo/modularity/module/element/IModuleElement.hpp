
#ifndef LIBDNF_IMODULEELEMENT_HPP
#define LIBDNF_IMODULEELEMENT_HPP


#include <string>

#include "../../modulemd/ModuleMetadata.hpp"
#include "../state/ModuleContext.hpp"

class IModuleElement
{
public:
    explicit IModuleElement(ModuleMetadata *metadata) : metadata(metadata), context() {};
    virtual ~IModuleElement() { delete metadata; };

    virtual const std::string getName() const = 0;
    virtual const std::string getStream() const = 0;
    virtual long long getVersion() const = 0;
    virtual const std::string getContext() const = 0;
    virtual const std::string getArchitecture() const = 0;
    virtual const std::string getDescription() const = 0;
    virtual const std::string getSummary() const = 0;
    virtual const std::map<std::string, std::string> getRequires() const = 0;
    virtual const std::vector<std::string> getArtifacts() const = 0;
    virtual const std::vector<std::string> getProfiles() const = 0;
    virtual const IProfile *getProfile(std::string &profileName) const = 0;
    virtual const std::vector<std::string> &getProfileContent(IProfile *profile) const = 0;

protected:
    IModuleElement() = default;

    ModuleMetadata *metadata;
    ModuleContext context;
};


#endif //LIBDNF_IMODULEELEMENT_HPP
