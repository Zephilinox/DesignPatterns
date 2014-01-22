#ifndef QUACKBEHAVIOUR_HPP
#define QUACKBEHAVIOUR_HPP

class QuackBehaviour
{
public:
    QuackBehaviour();
    virtual ~QuackBehaviour() = default;
    virtual void quack() = 0;
};

#endif //QUACKBEHAVIOUR_HPP
