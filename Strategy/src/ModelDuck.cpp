#include "ModelDuck.hpp"

//STD
#include <iostream>
#include <memory>

//SELF
#include "FlyRocketPowered.hpp"
#include "MuteQuack.hpp"

ModelDuck::ModelDuck()
{
    m_FB = std::unique_ptr<FlyRocketPowered> (new FlyRocketPowered());
    m_QB = std::unique_ptr<MuteQuack> (new MuteQuack());
}

void ModelDuck::display()
{
    std::cout << "ModelDuck displayed itself\n";
}
