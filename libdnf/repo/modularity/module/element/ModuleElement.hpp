
#ifndef LIBDNF_MODULEELEMENT_HPP
#define LIBDNF_MODULEELEMENT_HPP


#include "IModuleElement.hpp"

class ModuleElement : public IModuleElement
{
public:
    explicit ModuleElement(ModuleMetadata *metadata);
    
    const std::string getName() const override;
    const std::string getStream() const override;
    long long getVersion() const override;
    const std::string getContext() const override;
    const std::string getArchitecture() const override;
    const std::string getDescription() const override;
    const std::string getSummary() const override;
    const std::map<std::string, std::string> getRequires() const override;
    const std::vector<std::string> getArtifacts() const override;
    const std::vector<std::string> getProfiles() const override;
    const IProfile *getProfile(std::string &profileName) const override;
    const std::vector<std::string> &getProfileContent(IProfile *profile) const override;
};


#endif //LIBDNF_MODULEELEMENT_HPP
