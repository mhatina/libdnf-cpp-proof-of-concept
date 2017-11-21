SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/ReadOnlyTransaction.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Transaction.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionFactory.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/ITransaction.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ITransactionFactory.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ReadOnlyTransaction.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Transaction.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionFactory.hpp
        PARENT_SCOPE
        )