#include "team.hpp"

#include <iostream>

namespace cricket {

    Team::~Team() {
        delete coach;
        std::cout << "Destructed team \"" << name << "\"!\n";
    }

    std::string Team::to_string() const {
        std::string str = "Team ";
        str += name;
        str += ":\n[";

        for (auto& batter : batters) {
            str += "\n\t";
            str += batter.to_string();
        }

        str += "\n\t";
        str += all_rounder.to_string();

        str += "\n\t";
        str += wicket_keeper.to_string();

        for (auto& bowler : bowlers) {
            str += "\n\t";
            str += bowler.to_string();
        }

        str += "\n]";
        return str;
    }
}
