#include "Duck.hpp"

//STD
#include <iostream>

Duck::Duck()
{
    std::cout << "Duck constructed\n";
}

void Duck::quack()
{
    std::cout << "Duck quacked\n";
}

void Duck::swim()
{
    std::cout << "Duck swam\n";
}

void Duck::fly()
{
    std::cout << "Duck flew\n";
}
