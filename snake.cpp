#include <iostream>
#include <string>
#include "reptiles.cpp"
class Snake : public Reptiles
{
    public:
    Snake(){};
    std :: string get_name() override final
    {
        return "Snake";
    }
    std :: string get_a_latin_name() override final
    {
        return "Serpentes";
    }
    std :: string get_a_note() override final
    {
        return "Snakes are elongated, limbless, carnivorous reptiles of the suborder Serpentes";
    }
    virtual ~Snake(){};
};  
