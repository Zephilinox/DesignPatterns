#ifndef DUCK_HPP
#define DUCK_HPP

class Duck
{
public:
    Duck();

    virtual void quack(); //Virtual - derived classes can implement their own version
    virtual void swim();
    virtual void fly();

    virtual void display() = 0; //Pure virtual (Abstract)
                                //This class cannot be instantiated. An object of type Duck cannot be created. (Pure)
};

#endif //DUCK_HPP
