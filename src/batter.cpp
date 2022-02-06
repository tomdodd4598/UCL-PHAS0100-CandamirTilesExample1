#include "batter.hpp"

#include <string>

#define DCAST(x) static_cast<double>(x)

namespace cricket {

    double Batter::get_average() const {
        return DCAST(runs) / DCAST(dismissals);
    }

    double Batter::get_strike_rate() const {
        return 100.0 * DCAST(runs) / DCAST(balls);
    }

    std::string Batter::to_string() const {
        return
            "Batter: {Name: " + name
            + " | Runs scored: " + std::to_string(runs)
            + " | Batting average: " + std::to_string(get_average())
            + " | Batting strike rate: " + std::to_string(get_strike_rate())
            + " | Equipment: " + equipment_string()
            + '}';
            ;
    }
}
