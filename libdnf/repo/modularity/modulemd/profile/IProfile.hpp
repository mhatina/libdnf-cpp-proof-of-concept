
#ifndef LIBDNF_IPROFILE_HPP
#define LIBDNF_IPROFILE_HPP


#include <string>
#include <utility>
#include <vector>

class IProfile
{
public:
    IProfile(std::string name, std::string description, std::vector<std::string> rpms)
            : name(std::move(name)), description(std::move(description)), rpms(std::move(rpms))
    {}

    virtual ~IProfile() = default;

    virtual const std::string &getName() const = 0;
    virtual const std::string &getDescription() const = 0;
    virtual const std::vector<std::string> &getContent() const = 0;
    virtual bool hasRpm(std::string &rpm) const = 0;

protected:
    IProfile() = default;

    std::string name;
    std::string description;
    std::vector<std::string> rpms;
};


#endif //LIBDNF_IPROFILE_HPP
