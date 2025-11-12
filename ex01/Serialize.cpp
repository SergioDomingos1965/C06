#include "Serialize.hpp"

uintptr_t Serialize::serialize(data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

data* Serialize::deserialize(uintptr_t raw)
{
    return reinterpret_cast<data *>(raw);
}
