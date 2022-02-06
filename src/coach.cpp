#include "coach.hpp"

#include <string>

namespace cricket {

    std::string Coach::to_string() const {
        return
            "Coach: {Name: " + name
            + " | Coaching skill: " + std::to_string(skill)
            + '}';
            ;
    }
}
