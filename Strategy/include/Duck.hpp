#ifndef DUCK_HPP
#define DUCK_HPP

//STD
#include <memory>

//SELF
#include "FlyBehaviour.hpp"
#include "QuackBehaviour.hpp"

class Duck
{
public:
    Duck();
    virtual ~Duck() = default;

    virtual void quack(); //Virtual - derived classes can implement their own version
    virtual void swim();
    virtual void fly();

    virtual void display() = 0; //Pure virtual (Abstract)
                                //This class cannot be instantiated. An object of type Duck cannot be created. (Pure)
protected:
    std::unique_ptr<FlyBehaviour> m_FB;
    std::unique_ptr<QuackBehaviour> m_QB;
};

#endif //DUCK_HPP
