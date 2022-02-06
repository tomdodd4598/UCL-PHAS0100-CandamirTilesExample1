#ifndef COACH_H
#define COACH_H

#include "cricketer.hpp"

#include <string>
#include <utility>

namespace cricket {

    class Coach : public Cricketer {
    public:
        template<typename NAME, typename... EQUIPMENT>
        Coach(NAME&& name, double skill, EQUIPMENT&&... equipment) : Cricketer(std::forward<NAME>(name), std::forward<EQUIPMENT>(equipment)...), skill{skill} {}

        virtual std::string to_string() const;

        double skill;
    };
}

#endif
