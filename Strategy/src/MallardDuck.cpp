#include "MallardDuck.hpp"

//STD
#include <iostream>
#include <memory>

//SELF
#include "MuteQuack.hpp"

MallardDuck::MallardDuck()
{
    m_QB = std::unique_ptr<MuteQuack> (new MuteQuack);
    std::cout << "MallardDuck constructed\n";
}

void MallardDuck::display()
{
    std::cout << "MallardDuck displayed itself\n";
}
