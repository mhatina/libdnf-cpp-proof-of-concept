SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleElement.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/IModuleElement.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleElement.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/NullModuleElement.hpp
        PARENT_SCOPE
        )