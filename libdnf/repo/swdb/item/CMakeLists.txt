SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/Item.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/RPMItem.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionItem.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/Item.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/RPMItem.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/TransactionItem.hpp
        PARENT_SCOPE
        )