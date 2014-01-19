//STD
#include <iostream>

//SELF
#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

//Identify the aspects of your application that vary and separate them from what stays the same

/*
The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable.
Strategy lets the algorithm vary independently from clients that use it
*/

int main()
{
    //Duck d; //Compiler error - Duck::display() is a Pure Virtual function
    MallardDuck md;
    md.quack();
    md.swim();
    md.fly();
    md.display();

    std::cout << "\n";

    RedheadDuck rhd;
    rhd.quack();
    rhd.swim();
    rhd.fly();
    rhd.display();

    std::cout << "\n";

    RubberDuck rd;
    rd.quack();
    rd.swim();
    rd.fly(); //Unintentional - RubberDucks should not be able to fly
    rd.display();

    return 0;
}
