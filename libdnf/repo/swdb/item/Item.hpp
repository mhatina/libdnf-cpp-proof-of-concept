#ifndef LIBDNF_ITEM_HPP
#define LIBDNF_ITEM_HPP


#include <string>

class Item
{
    Item() = default;
    virtual ~Item() = default;

    virtual void markInstalled(std::string reason);
    virtual void markFinished();
};


#endif //LIBDNF_ITEM_HPP
