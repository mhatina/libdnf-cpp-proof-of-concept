ADD_SUBDIRECTORY(element)
ADD_SUBDIRECTORY(state)
ADD_SUBDIRECTORY(view)

SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleController.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/ModuleController.hpp
        PARENT_SCOPE
        )