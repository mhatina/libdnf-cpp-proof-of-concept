#ifndef LIBDNF_READONLYTRANSACTION_HPP
#define LIBDNF_READONLYTRANSACTION_HPP


#include "ITransaction.hpp"

class ReadOnlyTransaction : public ITransaction
{
    ReadOnlyTransaction() = default;
    virtual ~ReadOnlyTransaction() = default;

    virtual std::vector<TransactionItem *> listTransactionItems() const override;
    virtual std::vector<std::string> listLogMessages(int fileDescriptor = -1) const override;
    virtual std::string getSoftwarePerformedWith() const override;

    virtual void addTransactionItem(TransactionItem *transactionItem) {};
    virtual void setSoftwarePerformedWith(std::string &software) {};

    virtual void begin(long long rpmDBVersion = -1) {};
    virtual void logOutput(std::string *message, int fileDescriptor) {};
    virtual void end(long long rpmDBVersion) {};
};


#endif //LIBDNF_READONLYTRANSACTION_HPP
