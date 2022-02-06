#include "all_rounder.hpp"

#include <string>

#define DCAST(x) static_cast<double>(x)

namespace cricket {

    double AllRounder::get_batting_average() const {
        return DCAST(batting_runs) / DCAST(dismissals);
    }

    double AllRounder::get_batting_strike_rate() const {
        return 100.0 * DCAST(batting_runs) / DCAST(batting_balls);
    }

    double AllRounder::get_bowling_average() const {
        return DCAST(bowling_runs) / DCAST(wickets);
    }

    double AllRounder::get_bowling_strike_rate() const {
        return DCAST(bowling_balls) / DCAST(wickets);
    }

    double AllRounder::get_bowling_economy_rate() const {
        return 6.0 * DCAST(bowling_runs) / DCAST(bowling_balls);
    }

    std::string AllRounder::to_string() const {
        return
            "All-rounder: {Name: " + name
            + " | Runs scored: " + std::to_string(batting_runs)
            + " | Batting average: " + std::to_string(get_batting_average())
            + " | Batting strike rate: " + std::to_string(get_batting_strike_rate())
            + " | Wickets taken: " + std::to_string(wickets)
            + " | Bowling average: " + std::to_string(get_bowling_average())
            + " | Bowling strike rate: " + std::to_string(get_bowling_strike_rate())
            + " | Bowling economy rate: " + std::to_string(get_bowling_economy_rate())
            + " | Equipment: " + equipment_string()
            + '}';
            ;
    }
}
