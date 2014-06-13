INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_ZEROMQ "libzmq")

FIND_PATH(ZEROMQ_INCLUDE_DIRS
    NAMES zmq.h
    HINTS ${PC_ZEROMQ_INCLUDE_DIR}
    ${CMAKE_INSTALL_PREFIX}/include
    PATHS
    /usr/local/include
    /usr/include
)

FIND_LIBRARY(ZEROMQ_LIBRARIES
    NAMES zmq libzmq
    HINTS ${PC_ZEROMQ_LIBDIR}
    ${CMAKE_INSTALL_PREFIX}/lib
    ${CMAKE_INSTALL_PREFIX}/lib64
    PATHS
    ${ZEROMQ_INCLUDE_DIRS}/../lib
    /usr/local/lib
    /usr/lib
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(ZEROMQ DEFAULT_MSG ZEROMQ_LIBRARIES ZEROMQ_INCLUDE_DIRS)
MARK_AS_ADVANCED(ZEROMQ_LIBRARIES ZEROMQ_INCLUDE_DIRS)