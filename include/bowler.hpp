#ifndef BOWLER_H
#define BOWLER_H

#include "cricketer.hpp"

#include <string>
#include <utility>

namespace cricket {

    class Bowler : public Cricketer {
    public:
        template<typename NAME, typename... EQUIPMENT>
        Bowler(NAME&& name, int runs, int balls, int wickets, EQUIPMENT&&... equipment)
            : Cricketer(std::forward<NAME>(name), std::forward<EQUIPMENT>(equipment)...)
            , runs{runs}
            , balls{balls}
            , wickets{wickets}
        {}
        
        double get_average() const;

        double get_strike_rate() const;

        double get_economy_rate() const;

        virtual std::string to_string() const;

        int runs;
        int balls;
        int wickets;
    };
}

#endif
