#include "wicket_keeper.hpp"

#include <string>

namespace cricket {

    std::string WicketKeeper::to_string() const {
        return
            "Wicket keeper: {Name: " + name
            + " | Runs scored: " + std::to_string(runs)
            + " | Batting average: " + std::to_string(get_average())
            + " | Batting strike rate: " + std::to_string(get_strike_rate())
            + " | Catches: " + std::to_string(catches)
            + " | Stumpings: " + std::to_string(stumpings)
            + " | Equipment: " + equipment_string()
            + '}';
            ;
    }
}
