#include <iostream>
#include <string>
#include "crow.cpp"
#include "snake.cpp"
int main (int argc, char** argv)
{
    Animal* Animal1 = new Animal;
    Animal* Birds1 = new Birds;
    Animal* Reptiles1 = new Reptiles;
    Animal* Snake1 = new Snake;
    Animal* Crow1 = new Crow; 
    //      ստեղ արդեն կարող եմ իմ ունեցած բոլոր կլասների բոլոր անդամ ֆունկցիաները կանչել, բայց մենակ Crow կլասի Crow1 օբյեկտիննա կանչած
    std :: cout << Crow1->get_name() << std :: endl;
    std :: cout << Crow1->get_a_latin_name() << std :: endl;
    std :: cout << Crow1->get_a_note() << std :: endl;
    delete Animal1;
    delete Reptiles1;
    delete Birds1;
    delete Snake1;
    delete Crow1;

    int b;
    std :: cin >> b;
    return 0;
}