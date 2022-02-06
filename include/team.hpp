#ifndef TEAM_H
#define TEAM_H

#include "all_rounder.hpp"
#include "batter.hpp"
#include "bowler.hpp"
#include "coach.hpp"
#include "wicket_keeper.hpp"

#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace cricket {

    class Team {
    public:
        template<typename NAME>
        Team(NAME&& name, std::vector<Batter>&& batters, AllRounder&& all_rounder, WicketKeeper&& wicket_keeper, std::vector<Bowler>&& bowlers, Coach*&& coach)
            : name{std::forward<NAME>(name)}
            , batters{std::move(batters)}
            , all_rounder{std::move(all_rounder)}
            , wicket_keeper{std::move(wicket_keeper)}
            , bowlers{std::move(bowlers)}
            , coach{coach}
        {
            std::cout << "Constructed team \"" << name << "\"!\n";
        }

        ~Team();

        std::string to_string() const;

        std::string name;
        std::vector<Batter> batters;
        AllRounder all_rounder;
        WicketKeeper wicket_keeper;
        std::vector<Bowler> bowlers;
        Coach* coach;
    };
}

#endif
