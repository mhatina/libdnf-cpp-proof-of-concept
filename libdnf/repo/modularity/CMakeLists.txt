ADD_SUBDIRECTORY(cluster)
ADD_SUBDIRECTORY(module)
ADD_SUBDIRECTORY(modulemd)

SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModularityAPI.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/IFrontController.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/FrontController.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModularityAPI.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/IFrontController.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/FrontController.hpp
        PARENT_SCOPE
        )

add_executable(mod ${LIBDNF_HEADERS} ${LIBDNF_SOURCES})