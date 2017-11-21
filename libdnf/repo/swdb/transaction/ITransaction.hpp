#ifndef LIBDNF_ITRANSACTION_HPP
#define LIBDNF_ITRANSACTION_HPP

#include <string>
#include <vector>

#include "../item/TransactionItem.hpp"

class ITransaction
{
    // TODO create contructors AI:ecuba
    virtual ~ITransaction() = default;

    virtual std::vector<TransactionItem *> listTransactionItems() const = 0;
    virtual std::vector<std::string> listLogMessages(int fileDescriptor) const = 0;
    virtual std::string getSoftwarePerformedWith() const = 0;

    virtual void addTransactionItem(TransactionItem *transactionItem) = 0;
    virtual void setSoftwarePerformedWith(std::string &software) = 0;

    virtual void begin(long long rpmDBVersion) = 0;
    virtual void logOutput(std::string *message, int fileDescriptor) = 0;
    virtual void end(long long rpmDBVersion) = 0;

};


#endif //LIBDNF_ITRANSACTION_HPP
