SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/IModuleState.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/InstalledModuleState.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EnabledModuleState.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/LockedModuleState.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/DefaultModuleState.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleContext.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/IModuleState.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/InstalledModuleState.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/EnabledModuleState.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/LockedModuleState.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/DefaultModuleState.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleContext.hpp
        PARENT_SCOPE
        )