#ifndef _BIRDS_CPP_
#define _BIRDS_CPP_
#include <iostream>
#include <string>
#include "Animals.cpp"
class Birds : public Animal
{
    public:
    Birds(){};
    std :: string get_name() override
    {
        return "Birds";
    }
    std :: string get_a_latin_name() override
    {
        return "Neornithes";
    }
    std :: string get_a_note() override
    {
        return "Birds are a group of warm-blooded vertebrates constituting the class Aves";
    }
    virtual ~Birds(){};
};
#endif