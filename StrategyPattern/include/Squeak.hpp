#ifndef SQUEAK_HPP
#define SQUEAK_HPP

//SELF
#include "QuackBehaviour.hpp"

class Squeak : public QuackBehaviour
{
public:
    Squeak();
    virtual void quack();
private:
};

#endif // SQUEAK_HPP
