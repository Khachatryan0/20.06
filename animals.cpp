#ifndef _ANIMALS_CPP_
#define _ANIMALS_CPP_
#include <iostream>
#include <string>
class Animal
{
    public:
    Animal(){};
    virtual std :: string get_a_note()
    {
        return "Animals are multicellular, eukaryotic organisms in the biological kingdom Animalia, within my program it's consist from reptiles and birds\n";
    }
    virtual std :: string get_name()
    {
        return "''Animals''";
    }
    virtual std :: string get_a_latin_name()
    {
        return "Latin name is ''Animalia''";
    }
    virtual ~Animal(){};
};

#endif