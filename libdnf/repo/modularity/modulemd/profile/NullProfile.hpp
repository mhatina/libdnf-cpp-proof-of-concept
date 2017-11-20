
#ifndef LIBDNF_NULLPROFILE_HPP
#define LIBDNF_NULLPROFILE_HPP


#include "IProfile.hpp"

class NullProfile : public IProfile
{
public:
    NullProfile() : IProfile() {};

    const std::string &getName() const override { throw exception(); };
    const std::string &getDescription() const override  { throw exception(); };
    const std::vector<std::string> &getContent() const override { throw exception(); };
    bool hasRpm(std::string &rpm) const override { throw exception(); };

private:
    std::string exception() const { return "Non-existent profile"; };
};


#endif //LIBDNF_NULLPROFILE_HPP

