
#include <iostream>

#include "cluster/ModuleMaker.hpp"

int main()
{
    ModuleMaker maker;
    std::string path = "/home/mhatina/dnf-shared/dnf/tests/modules/modules/_all/x86_64/httpd-2.4-2.x86_64.yaml";
    std::vector<ModuleController *> modules = maker.readYamlFile(path);
    for (ModuleController *item : modules) {
        std::cout << item->getElement()->getName() << std::endl;
        std::cout << item->getElement()->getStream() << std::endl;
        std::cout << item->getElement()->getVersion() << std::endl;
        std::cout << item->getElement()->getContext() << std::endl;
        std::cout << item->getElement()->getArchitecture() << std::endl;
        std::cout << item->getElement()->getDescription() << std::endl;
        std::cout << item->getElement()->getSummary() << std::endl;

        auto profiles = item->getElement()->getProfiles();
        std::cout << profiles[0] << std::endl;

        auto artifacts = item->getElement()->getArtifacts();
        std::cout << artifacts[0] << std::endl;

        auto req = item->getElement()->getRequires();
        std::cout << (req.empty() ? "true" : "false") << std::endl;

        std::string profileName = "default";
        const IProfile *profile = item->getElement()->getProfile(profileName);
        std::cout << profile->getName() << std::endl;

        auto cont = profile->getContent();
        std::cout << cont[0] << std::endl;

        std::string rpm = "htt";
        std::cout << profile->hasRpm(rpm) << "\n";
    }


}