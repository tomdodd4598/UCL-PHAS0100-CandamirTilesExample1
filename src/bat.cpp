#include "bat.hpp"
#include "equipment.hpp"

#include <string>

namespace cricket {

    const char* Bat::type_string() const {
        return "Bat";
    }

    std::string Bat::to_string() const {
        return
            "Name: " + name
            + " | Quality: " + std::to_string(quality)
            ;
    }
}
