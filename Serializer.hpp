#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include "Data.hpp"

class Serializer{
    
    public:

        typedef unsigned long uintptr_t;
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);

    private:

    Serializer() {};

};

#endif