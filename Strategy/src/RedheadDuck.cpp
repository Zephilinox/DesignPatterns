#include "RedheadDuck.hpp"

//STD
#include <iostream>
#include <memory>

//SELF
#include "FlyForbidden.hpp"

RedheadDuck::RedheadDuck()
{
    m_FB = std::unique_ptr<FlyForbidden> (new FlyForbidden);
    std::cout << "RedheadDuck constructed\n";
}

void RedheadDuck::display()
{
    std::cout << "RedheadDuck displayed itself\n";
}
