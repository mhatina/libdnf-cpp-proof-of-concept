
#include <string>
#include <vector>

#include "ProfileMaker.hpp"
#include "NullProfile.hpp"
#include "Profile.hpp"

IProfile *ProfileMaker::getProfile(std::string &profileName, ModulemdModule *modulemd) const
{
    GHashTable *c_profiles = modulemd_module_get_profiles(modulemd);

    GHashTableIter iterator;
    gpointer key, value;

    g_hash_table_iter_init(&iterator, c_profiles);
    while (g_hash_table_iter_next(&iterator, &key, &value)) {
        std::string key_str = (char *) key;
        if (profileName == key_str) {
            auto *profile = (ModulemdProfile *) value;
            const gchar *c_description = modulemd_profile_get_description(profile);
            std::string description = c_description != nullptr ? c_description : "";
            std::vector<std::string> rpms = getProfileRpms(profile);

            return new Profile(profileName, description, rpms);
        }
    }

    return new NullProfile();
}

std::vector<std::string> ProfileMaker::getProfileRpms(ModulemdProfile *profile) const
{
    std::vector<std::string> rpms;

    ModulemdSimpleSet *rpms_cset = modulemd_profile_get_rpms(profile);
    gchar **c_rpms = modulemd_simpleset_get(rpms_cset);

    for (int i = 0; c_rpms[i] != nullptr; i++) {
        std::string rpm_str = c_rpms[i];
        rpms.push_back(rpm_str);
    }

    return rpms;
}
