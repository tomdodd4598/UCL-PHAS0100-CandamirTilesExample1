#ifndef WICKET_KEEPER_H
#define WICKET_KEEPER_H

#include "batter.hpp"

#include <string>
#include <utility>

namespace cricket {

    class WicketKeeper : public Batter {
    public:
        template<typename NAME, typename... EQUIPMENT>
        WicketKeeper(NAME&& name, int runs, int balls, int dismissals, int catches, int stumpings, EQUIPMENT&&... equipment)
            : Batter(std::forward<NAME>(name), runs, balls, dismissals, std::forward<EQUIPMENT>(equipment)...)
            , catches{catches}
            , stumpings{stumpings}
        {}

        virtual std::string to_string() const;

        int catches;
        int stumpings;
    };
}

#endif
