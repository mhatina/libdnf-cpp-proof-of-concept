
#include <regex>
#include <utility>
#include "Profile.hpp"

Profile::Profile(std::string &name, std::string &description, std::vector<std::string> rpms)
        : IProfile(name, description, std::move(rpms))
{
}

const std::string &Profile::getName() const
{
    return name;
}

const std::string &Profile::getDescription() const
{
    return description;
}

const std::vector<std::string> &Profile::getContent() const
{
    return rpms;
}

bool Profile::hasRpm(std::string &rpm) const
{
    for (auto &&item : rpms) {
        std::string copy = item;
        if (item.rfind('*', item.length() - 1) == std::string::npos)
            copy += "*";

        std::regex regexp(rpm);
        if (std::regex_search(copy, regexp)) {
            return true;
        }
    }

    return false;
}
