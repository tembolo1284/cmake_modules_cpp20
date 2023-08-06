set(MAIN_SOURCES
    main.cpp
)

add_executable(Main ${MAIN_SOURCES})

target_link_libraries(Main PRIVATE Finance)