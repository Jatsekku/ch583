project(helperMacro)

add_executable(macroMonitor macroMonitor.c)

target_link_libraries(macroMonitor
    PRIVATE helperMacro)
