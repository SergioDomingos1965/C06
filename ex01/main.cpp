#include "Serialize.hpp"
#include "Data.hpp"

int main()
{
    data *d = new data;

    uintptr_t inter;
    data *date;
    d->message = "Hello";
    d->number = 10;
    d->pi = 3.14;

    inter = Serialize::serialize(d);
    date = Serialize::deserialize(inter);

    std::cout <<"Pointer "<<d<<std::endl;
    std::cout <<"serialize : "<<inter<<std::endl;
    std::cout <<"deserialize: "<< date <<std::endl;
    
}