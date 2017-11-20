
#ifndef LIBDNF_NULLMODULEELEMENT_HPP
#define LIBDNF_NULLMODULEELEMENT_HPP


#include "IModuleElement.hpp"

class NullModuleElement : public IModuleElement
{
public:
    NullModuleElement() : IModuleElement() {}

    const std::string getName() const override { throw exception(); };
    const std::string getStream() const override { throw exception(); };
    long long getVersion() const override { throw exception(); };
    const std::string getContext() const override { throw exception(); };
    const std::string getArchitecture() const override { throw exception(); };
    const std::string getDescription() const override { throw exception(); };
    const std::string getSummary() const override { throw exception(); };
    const std::map<std::string, std::string> getRequires() const override { throw exception(); };
    const std::vector<std::string> getArtifacts() const override { throw exception(); };
    const std::vector<std::string> getProfiles() const override { throw exception(); };
    const IProfile *getProfile(std::string &profileName) const override { throw exception(); };
    const std::vector<std::string> &getProfileContent(IProfile *profile) const override { throw exception(); };

private:
    std::string exception() const { return "Invalid module element"; };
};


#endif //LIBDNF_NULLMODULEELEMENT_HPP
