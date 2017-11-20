
#ifndef LIBDNF_MODULEMETADATA_HPP
#define LIBDNF_MODULEMETADATA_HPP


#include <string>
#include <map>
#include <vector>

extern "C" {
    #include <modulemd/modulemd-module.h>
};

#include "profile/IProfile.hpp"

class ModuleMetadata
{
public:
    explicit ModuleMetadata(ModulemdModule *modulemd);
    ~ModuleMetadata();

    const std::string getName() const;
    const std::string getStream() const;
    long long getVersion() const;
    const std::string getContext() const;
    const std::string getArch() const;
    const std::string getDescription() const;
    const std::string getSummary() const;
    const std::map<std::string, std::string> getRequires() const;
    const std::vector<std::string> getArtifacts() const;
    const std::vector<std::string> getProfiles() const;
    const IProfile *getProfile(std::string &profileName) const;
    const std::vector<std::string> &getProfileContent(IProfile *profile) const;

private:
    ModulemdModule *modulemd;
};


#endif //LIBDNF_MODULEMETADATA_HPP
