SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleClusterController.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleClusterView.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleMaker.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleClusterController.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleClusterView.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleMaker.hpp
        PARENT_SCOPE
        )
