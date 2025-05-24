find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(client
        main.cpp
        Game.cpp
        Game.h
)

target_link_libraries(client sfml-graphics sfml-window sfml-system)
