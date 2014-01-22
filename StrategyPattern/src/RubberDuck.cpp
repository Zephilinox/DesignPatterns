#include "RubberDuck.hpp"

//STD
#include <iostream>
#include <memory>

//SELF
#include "Squeak.hpp"

RubberDuck::RubberDuck()
{
    m_QB = std::unique_ptr<Squeak> (new Squeak());
    std::cout << "RubberDuck constructed\n";
}

void RubberDuck::display()
{
    std::cout << "RubberDuck displayed itself\n";
}
