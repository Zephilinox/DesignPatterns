#include "FlyForbidden.hpp"

//STD
#include <iostream>

FlyForbidden::FlyForbidden()
{
    std::cout << "FlyForbidden Behaviour constructed\n";
}

void FlyForbidden::fly()
{
    std::cout << "Flying is forbidden\n";
}
