#ifndef LIBDNF_SWDBPRIVATE_HPP
#define LIBDNF_SWDBPRIVATE_HPP

#include "SWDB.hpp"

class HyPackage;

namespace privateAPI {

class SWDB : public publicAPI::SWDB
{
public:
    SWDB(ITransactionFactory *transactionFactory);

    Item *getRpmItem(HyPackage *package) const;
    TransactionItem *createTransactionItem(Item *item, std::string &repoID, std::string &reason, bool obsoleting);
    ITransaction *createTransaction(long uid, std::string &cliCommand);
    void add(Item *item);
};
};

#endif //LIBDNF_SWDBPRIVATE_HPP
