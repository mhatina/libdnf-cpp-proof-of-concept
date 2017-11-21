#ifndef LIBDNF_TRANSACTION_HPP
#define LIBDNF_TRANSACTION_HPP

#include <string>

#include "../item/TransactionItem.hpp"
#include "ReadOnlyTransaction.hpp"

class Transaction : public ReadOnlyTransaction
{
    void addTransactionItem(TransactionItem *transactionItem) override;
    void setSoftwarePerformedWith(std::string &software) override;

    void begin(long long rpmDBVersion = -1) override;
    void logOutput(std::string *message, int fileDescriptor) override;
    void end(long long rpmDBVersion) override;
};


#endif //LIBDNF_TRANSACTION_HPP
