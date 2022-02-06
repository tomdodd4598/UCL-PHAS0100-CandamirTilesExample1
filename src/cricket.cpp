#include "all_rounder.hpp"
#include "bat.hpp"
#include "batter.hpp"
#include "bowler.hpp"
#include "coach.hpp"
#include "cricket.hpp"
#include "cricketer.hpp"
#include "team.hpp"
#include "wicket_keeper.hpp"

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace cricket {

    void test_func() {
        using namespace std;

        vector<Batter> batters{
            Batter("Webs", 4363, 7432, 109, Bat("Crunch", 0.75)),
            Batter("Tiles", 2910, 5529, 74, Bat("Bonus", 0.7)),
            Batter("Hart", 3817, 7829, 89, Bat("Beast", 0.8)),
            Batter("Monk", 1652, 2330, 45, Bat("Zinger", 0.85)),
            Batter("Corbs", 7294, 13954, 160, Bat("Narvbuster", 0.65)),
        };

        vector<Bowler> bowlers{
            Bowler("Briggsy", 2859, 5325, 109),
            Bowler("Marcus", 325, 656, 17),
            Bowler("Maxwise", 234, 384, 13),
            Bowler("Lansdell", 4219, 7932, 156),
            Bowler("Thane", 9483, 15532, 434),
        };

        auto sort_print = [](auto& collection, auto&& compare) {
            sort(collection.begin(), collection.end(), compare);
            for_each(collection.begin(), collection.end(), [](const Cricketer& x) { cout << x.to_string() << '\n'; });
            cout << '\n';
        };

        sort_print(bowlers, [](const Bowler& x, const Bowler& y) { return x.wickets > y.wickets; });
        sort_print(batters, [](const Batter& x, const Batter& y) { return x.get_average() > y.get_average(); });

        auto team = Team(
            "Load Ol' Cricketers"
            , std::move(batters)
            , AllRounder("Dave", 1859, 2738, 54, 1043, 1883, 32, Bat("Comet", 0.7))
            , WicketKeeper("Ronnie", 2395, 3402, 83, 217, 13)
            , std::move(bowlers)
            , new Coach("Moyeseh", 0.8)
        );

        cout << team.to_string() << '\n';
    }
}
