
#include "ModuleElement.hpp"

ModuleElement::ModuleElement(ModuleMetadata *metadata)
    : IModuleElement(metadata)
{

}

const std::string ModuleElement::getName() const
{
    return metadata->getName();
}

const std::string ModuleElement::getStream() const
{
    return metadata->getStream();
}

long long ModuleElement::getVersion() const
{
    return metadata->getVersion();
}

const std::string ModuleElement::getContext() const
{
    return metadata->getContext();
}

const std::string ModuleElement::getArchitecture() const
{
    return metadata->getArch();
}

const std::string ModuleElement::getDescription() const
{
    return metadata->getDescription();
}

const std::string ModuleElement::getSummary() const
{
    return metadata->getSummary();
}

const std::map<std::string, std::string> ModuleElement::getRequires() const
{
    return metadata->getRequires();
}

const std::vector<std::string> ModuleElement::getArtifacts() const
{
    return metadata->getArtifacts();
}

const std::vector<std::string> ModuleElement::getProfiles() const
{
    return metadata->getProfiles();
}

const IProfile *ModuleElement::getProfile(std::string &profileName) const
{
    return metadata->getProfile(profileName);
}

const std::vector<std::string> &ModuleElement::getProfileContent(IProfile *profile) const
{
    return metadata->getProfileContent(profile);
}
