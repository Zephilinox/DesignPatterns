#include "RubberDuck.hpp"

//STD
#include <iostream>

RubberDuck::RubberDuck()
{
    std::cout << "RubberDuck constructed\n";
}

void RubberDuck::quack()
{
    std::cout << "RubberDuck squeaked\n";
}

void RubberDuck::display()
{
    std::cout << "RubberDuck displayed itself\n";
}
