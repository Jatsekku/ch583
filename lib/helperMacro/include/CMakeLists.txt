project(helperMacro)

add_library(helperMacro INTERFACE)

target_link_libraries(helperMacro
    INTERFACE buildContext)

target_include_directories(helperMacro INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
