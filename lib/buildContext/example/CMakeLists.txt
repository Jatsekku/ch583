project(buildContext)

add_executable(contextMonitor contextMonitor.c)

target_link_libraries(contextMonitor
    PRIVATE buildContext
    PRIVATE helperMacro)

set_property(TARGET contextMonitor PROPERTY C_STANDARD 11)
