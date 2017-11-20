
#ifndef LIBDNF_PROFILEMAKER_HPP
#define LIBDNF_PROFILEMAKER_HPP

#include "IProfile.hpp"

extern "C" {
    #include <modulemd/modulemd-module.h>
    #include <modulemd/modulemd-profile.h>
};

class ProfileMaker
{
public:
    IProfile *getProfile(std::string &profileName, ModulemdModule *modulemd) const;

private:
    std::vector<std::string> getProfileRpms(ModulemdProfile *profile) const;
};


#endif //LIBDNF_PROFILEMAKER_HPP
