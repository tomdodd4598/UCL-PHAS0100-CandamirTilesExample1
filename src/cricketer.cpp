#include "cricketer.hpp"
#include "equipment.hpp"

#include <string>

namespace cricket {

    std::string Cricketer::equipment_string() const {
        std::string str = "[";

        bool begin = true;
        for (auto& e : equipment_list) {
            if (begin) {
                begin = false;
            }
            else {
                str += ", ";
            }
            str += e->type_string();
            str += ": {";
            str += e->to_string();
            str += '}';
        }

        str += ']';
        return str;
    }
}
