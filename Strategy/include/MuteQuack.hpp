#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

//SELF
#include "QuackBehaviour.hpp"

class MuteQuack : public QuackBehaviour
{
public:
    MuteQuack();
    virtual void quack();
};

#endif //MUTEQUACK_HPP
