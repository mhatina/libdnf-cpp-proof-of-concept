#ifndef LIBDNF_TRANSACTIONFACTORY_HPP
#define LIBDNF_TRANSACTIONFACTORY_HPP


#include "ITransactionFactory.hpp"

class TransactionFactory : public ITransactionFactory
{
    ITransaction *getTransaction() override;
};


#endif //LIBDNF_TRANSACTIONFACTORY_HPP
