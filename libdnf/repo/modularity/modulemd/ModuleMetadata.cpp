
#include "ModuleMetadata.hpp"
#include "profile/ProfileMaker.hpp"

ModuleMetadata::ModuleMetadata(ModulemdModule *modulemd)
    : modulemd(modulemd)
{
}

ModuleMetadata::~ModuleMetadata()
{
    free(modulemd);
}

const std::string ModuleMetadata::getName() const
{
    const char *name = modulemd_module_get_name(modulemd);
    return name != nullptr ? name : "";
}

const std::string ModuleMetadata::getStream() const
{
    const char *stream = modulemd_module_get_stream(modulemd);
    return stream != nullptr ? stream : "";
}

long long ModuleMetadata::getVersion() const
{
    return (long long) modulemd_module_get_version(modulemd);
}

const std::string ModuleMetadata::getContext() const
{
    const char *context = modulemd_module_get_context(modulemd);
    return context != nullptr ? context : "";
}

const std::string ModuleMetadata::getArch() const
{
    const char *arch = modulemd_module_get_arch(modulemd);
    return arch != nullptr ? arch : "";
}

const std::string ModuleMetadata::getDescription() const
{
    const char *description = modulemd_module_get_description(modulemd);
    return description != nullptr ? description : "";
}

const std::string ModuleMetadata::getSummary() const
{
    const char *summary = modulemd_module_get_summary(modulemd);
    return summary != nullptr ? summary : "";
}

const std::map<std::string, std::string> ModuleMetadata::getRequires() const
{
    GHashTable *c_requires = modulemd_module_get_requires(modulemd);
    std::map<std::string, std::string> requires;

    GHashTableIter iterator;
    gpointer key, value;

    g_hash_table_iter_init (&iterator, c_requires);
    while (g_hash_table_iter_next(&iterator, &key, &value)) {
        std::string key_str = (char *) key;
        std::string value_str = (char *) value;
        requires[key_str] = value_str;
    }

    return requires;
}

const std::vector<std::string> ModuleMetadata::getArtifacts() const
{
    ModulemdSimpleSet *c_artifacts = modulemd_module_get_rpm_artifacts(modulemd);
    gchar **c_rpms = modulemd_simpleset_get(c_artifacts);

    std::vector<std::string> artifacts;
    for (int i = 0; c_rpms[i] != nullptr; i++) {
        std::string rpm_str = c_rpms[i];
        artifacts.push_back(rpm_str);
    }

    return artifacts;
}

const std::vector<std::string> ModuleMetadata::getProfiles() const
{
    GHashTable *c_requires = modulemd_module_get_profiles(modulemd);
    std::vector<std::string> profiles;

    GHashTableIter iterator;
    gpointer key, value;

    g_hash_table_iter_init (&iterator, c_requires);
    while (g_hash_table_iter_next(&iterator, &key, &value)) {
        std::string key_str = (char *) key;
        profiles.push_back(key_str);
    }

    return profiles;
}

const IProfile *ModuleMetadata::getProfile(std::string &profileName) const
{
    return ProfileMaker().getProfile(profileName, modulemd);
}

const std::vector<std::string> &ModuleMetadata::getProfileContent(IProfile *profile) const
{
    return profile->getContent();
}



