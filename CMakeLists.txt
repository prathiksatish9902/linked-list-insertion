cmake_minimum_required(VERSION 3.16)

project(linkedlist_implementation LANGUAGES C)

add_executable(linkedlist_implementation main.c
    main.c)

include(GNUInstallDirs)
install(TARGETS linkedlist_implementation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
