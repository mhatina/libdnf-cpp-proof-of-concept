SET (LIBDNF_SOURCES
        ${LIBDNF_SOURCES}
        ${CMAKE_CURRENT_SOURCE_DIR}/Profile.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ProfileMaker.cpp
        PARENT_SCOPE
        )

SET (LIBDNF_HEADERS
        ${LIBDNF_HEADERS}
        ${CMAKE_CURRENT_SOURCE_DIR}/IProfile.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Profile.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/NullProfile.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/ProfileMaker.hpp
        PARENT_SCOPE
        )