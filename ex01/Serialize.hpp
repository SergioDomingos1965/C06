#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include "Data.hpp"
#include <iostream>
#include <stdint.h>
class Serialize
{
    private:
        Serialize();
        ~Serialize();
        Serialize(const Serialize &src);
        Serialize &operator=(const Serialize &src);
    public:
        static uintptr_t serialize(data* ptr);
        static data* deserialize(uintptr_t raw);
};

#endif 