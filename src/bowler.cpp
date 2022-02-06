#include "bowler.hpp"

#include <string>

#define DCAST(x) static_cast<double>(x)

namespace cricket {

    double Bowler::get_average() const {
        return DCAST(runs) / DCAST(wickets);
    }

    double Bowler::get_strike_rate() const {
        return DCAST(balls) / DCAST(wickets);
    }

    double Bowler::get_economy_rate() const {
        return 6.0 * DCAST(runs) / DCAST(balls);
    }

    std::string Bowler::to_string() const {
        return
            "Bowler: {Name: " + name
            + " | Wickets taken: " + std::to_string(wickets)
            + " | Bowling average: " + std::to_string(get_average())
            + " | Bowling strike rate: " + std::to_string(get_strike_rate())
            + " | Bowling economy rate: " + std::to_string(get_economy_rate())
            + " | Equipment: " + equipment_string()
            + '}';
            ;
    }
}
