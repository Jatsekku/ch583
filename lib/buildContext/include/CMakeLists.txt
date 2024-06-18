project(buildContext)

add_library(buildContext INTERFACE)

target_include_directories(buildContext INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
