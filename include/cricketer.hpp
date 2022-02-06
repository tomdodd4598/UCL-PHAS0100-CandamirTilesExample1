#ifndef CRICKETER_H
#define CRICKETER_H

#include "equipment.hpp"

#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace cricket {

    class Cricketer {
    protected:
        template<typename NAME, typename EQUIPMENT_FIRST, typename... EQUIPMENT_TAIL>
        Cricketer(NAME&& name, EQUIPMENT_FIRST&& equipment_first, EQUIPMENT_TAIL&&... equipment_tail)
            : Cricketer(std::forward<NAME>(name), std::forward<EQUIPMENT_TAIL>(equipment_tail)...)
        {
            add_equipment(std::forward<EQUIPMENT_FIRST>(equipment_first));
        }

        template<typename NAME>
        Cricketer(NAME&& name) : name{std::forward<NAME>(name)} {}
    
    public:
        template<typename EQUIPMENT>
        void add_equipment(EQUIPMENT&& equipment) {
            equipment_list.push_back(std::shared_ptr<Equipment>(new EQUIPMENT(std::forward<EQUIPMENT>(equipment))));
        }

        virtual std::string equipment_string() const;

        virtual std::string to_string() const = 0;

        std::string name;

        std::vector<std::shared_ptr<Equipment>> equipment_list;
    };
}

#endif
