#ifndef BAT_H
#define BAT_H

#include "equipment.hpp"

#include <string>
#include <utility>

namespace cricket {

    class Bat : public Equipment {
    public:
        template<typename NAME>
        Bat(NAME&& name, double quality) : Equipment(std::forward<NAME>(name)), quality{quality} {}

        virtual const char* type_string() const;

        virtual std::string to_string() const;

        double quality;
    };
}

#endif
