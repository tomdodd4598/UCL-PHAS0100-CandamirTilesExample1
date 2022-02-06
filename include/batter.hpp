#ifndef BATTER_H
#define BATTER_H

#include "cricketer.hpp"

#include <string>
#include <utility>

namespace cricket {

    class Batter : public Cricketer {
    public:
        template<typename NAME, typename... EQUIPMENT>
        Batter(NAME&& name, int runs, int balls, int dismissals, EQUIPMENT&&... equipment)
            : Cricketer(std::forward<NAME>(name), std::forward<EQUIPMENT>(equipment)...)
            , runs{runs}
            , balls{balls}
            , dismissals{dismissals}
        {}
        
        double get_average() const;

        double get_strike_rate() const;

        virtual std::string to_string() const;

        int runs;
        int balls;
        int dismissals;
    };
}

#endif
