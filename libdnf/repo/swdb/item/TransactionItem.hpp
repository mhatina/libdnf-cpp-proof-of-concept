#ifndef LIBDNF_TRANSACTIONITEM_HPP
#define LIBDNF_TRANSACTIONITEM_HPP


#include <repo.hpp>
#include "Item.hpp"

class TransactionItem
{
    TransactionItem(Item *item, Repo *repo, std::string reason, bool obsoleting);

    Item *getItem();
};


#endif //LIBDNF_TRANSACTIONITEM_HPP
