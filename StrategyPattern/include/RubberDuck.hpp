#ifndef RUBBERDUCK_HPP
#define RUBBERDUCK_HPP

//SELF
#include "Duck.hpp"

class RubberDuck : public Duck
{
public:
    RubberDuck();
    virtual void quack();
    virtual void display();
};

#endif //RUBBERDUCK_HPP
