#ifndef LIBDNF_SWDB_HPP
#define LIBDNF_SWDB_HPP

#include <string>

#include "transaction/ITransactionFactory.hpp"

namespace publicAPI {

class SWDB
{
public:
    SWDB(ITransactionFactory &transactionFactory);
    virtual ~SWDB() = default;

    std::vector<ITransaction *> listTransactions();
    std::vector<ITransaction *> listTransactions(std::vector<std::string> &pkgSpecs);
    std::vector<ITransaction *> listTransactions(std::vector<long long> &transactionIDs);
    ITransaction *getTransaction(long long transactionID);
    ITransaction *getLastTransaction();

private:
    ITransactionFactory *transactionFactory;
};
};

#endif //LIBDNF_SWDB_HPP
