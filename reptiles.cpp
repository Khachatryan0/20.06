#ifndef _REPTILES_CPP_
#define _REPTILES_CPP_
#include <iostream>
#include <string>
#include "Animals.cpp"
class Reptiles : public Animal
{
    public:
    Reptiles(){};
    std :: string get_name() override
    {
        return "Reptile";
    }
    std :: string get_a_latin_name() override
    {
        return "Reptilia";
    }
    std :: string get_a_note() override
    {
        return "Reptiles, as most commonly defined, are the animals in the class Reptilia a paraphyletic grouping comprising all sauropsids except birds";
    }
    virtual ~Reptiles(){};
};
#endif