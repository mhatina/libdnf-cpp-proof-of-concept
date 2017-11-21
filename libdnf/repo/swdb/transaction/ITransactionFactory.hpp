#ifndef LIBDNF_ITRANSACTIONFACTORY_HPP
#define LIBDNF_ITRANSACTIONFACTORY_HPP


#include "ITransaction.hpp"

class ITransactionFactory
{
    ITransactionFactory() = default;
    virtual ~ITransactionFactory() = default;

    virtual ITransaction *getTransaction() = 0;
};


#endif //LIBDNF_ITRANSACTIONFACTORY_HPP
