
#ifndef LIBDNF_PROFILE_HPP
#define LIBDNF_PROFILE_HPP


#include "IProfile.hpp"

class Profile : public IProfile
{
public:
    Profile(std::string &name, std::string &description, std::vector<std::string> rpms);

    virtual ~Profile() = default;

    const std::string &getName() const override;
    const std::string &getDescription() const override;
    const std::vector<std::string> &getContent() const override;
    bool hasRpm(std::string &rpm) const override;
};


#endif //LIBDNF_PROFILE_HPP
