#ifndef QUACK_HPP
#define QUACK_HPP

//SELF
#include "QuackBehaviour.hpp"

class Quack : public QuackBehaviour
{
public:
    Quack();
    virtual void quack();
};

#endif //QUACK_HPP
