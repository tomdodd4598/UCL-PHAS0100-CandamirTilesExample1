add_library(CricketLib STATIC cricket.cpp team.cpp cricketer.cpp batter.cpp bowler.cpp all_rounder.cpp wicket_keeper.cpp coach.cpp equipment.cpp bat.cpp)
target_include_directories(CricketLib PUBLIC ${IncludeDir})

add_executable(CandamirTiles main.cpp)
target_link_libraries(CandamirTiles PRIVATE CricketLib)
