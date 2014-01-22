#include "Duck.hpp"

//STD
#include <iostream>

//SELF
#include "FlyWithWings.hpp"
#include "Quack.hpp"

Duck::Duck()
{
    m_FB = std::unique_ptr<FlyWithWings>(new FlyWithWings());
    m_QB = std::unique_ptr<Quack>(new Quack());

    std::cout << "Duck constructed\n";
}

void Duck::quack()
{
    m_QB->quack();
}

void Duck::swim()
{
    std::cout << "Duck swam\n";
}

void Duck::fly()
{
    m_FB->fly();
}
