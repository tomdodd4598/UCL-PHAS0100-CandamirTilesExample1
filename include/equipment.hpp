#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
#include <utility>

namespace cricket {

    class Equipment {
    protected:
        template<typename NAME>
        Equipment(NAME&& name) : name{std::forward<NAME>(name)} {}

    public:
        virtual const char* type_string() const = 0;
        
        virtual std::string to_string() const = 0;

        std::string name;
    };
}

#endif
