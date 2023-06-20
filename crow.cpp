#include <iostream>
#include <string>
#include "birds.cpp"
class Crow : public Birds
{
    public:
    Crow(){};
    std :: string get_name() override final
    {
        return "Crow";
    }
    std :: string get_a_latin_name() override final
    {
        return "Corone";
    } 
    std :: string get_a_note() override final
    {
        return "The carrion crow is a passerine bird of the family Corvidae and the genus Corvus which is native to western Europe and the eastern Palearctic.";
    }
    virtual ~Crow(){};
};