#ifndef FLYBEHAVIOUR_HPP
#define FLYBEHAVIOUR_HPP

#include <iostream>

class FlyBehaviour
{
public:
    FlyBehaviour();
    virtual ~FlyBehaviour() = default;
    virtual void fly() = 0; //Pure virtual means that this class cannot be instantiated.
                            //Derived classes must implement this function.
};

#endif //FLYBEHAVIOUR_HPP
