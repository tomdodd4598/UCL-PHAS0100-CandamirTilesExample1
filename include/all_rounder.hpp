#ifndef ALL_ROUNDER_H
#define ALL_ROUNDER_H

#include "cricketer.hpp"

#include <string>
#include <utility>

namespace cricket {

    class AllRounder : public Cricketer {
    public:
        template<typename NAME, typename... EQUIPMENT>
        AllRounder(NAME&& name, int batting_runs, int batting_balls, int dismissals, int bowling_runs, int bowling_balls, int wickets, EQUIPMENT&&... equipment)
            : Cricketer(std::forward<NAME>(name), std::forward<EQUIPMENT>(equipment)...)
            , batting_runs{batting_runs}
            , batting_balls{batting_balls}
            , dismissals{dismissals}
            , bowling_runs{bowling_runs}
            , bowling_balls{bowling_balls}
            , wickets{wickets}
        {}

        double get_batting_average() const;

        double get_batting_strike_rate() const;

        double get_bowling_average() const;

        double get_bowling_strike_rate() const;

        double get_bowling_economy_rate() const;

        virtual std::string to_string() const;

        int batting_runs;
        int batting_balls;
        int dismissals;
        int bowling_runs;
        int bowling_balls;
        int wickets;
    };
}

#endif
