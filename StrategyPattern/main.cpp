//STD
#include <iostream>
#include <vector>

//SELF
#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

#include "FlyBehaviour.hpp"
#include "FlyWithWings.hpp"
#include "FlyForbidden.hpp"

//Identify the aspects of your application that vary and separate them from what stays the same

/*
The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable.
Strategy lets the algorithm vary independently from clients that use it
*/

int main()
{
    //Duck d; //Compiler error - Duck::display() is a Pure Virtual function
    /*MallardDuck md;
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

    std::cout << "\n";*/


    std::vector<FlyBehaviour*> fb;
    fb.push_back(new FlyWithWings());
    fb.push_back(new FlyForbidden());
    fb[0]->fly();
    fb[1]->fly();

    for (std::vector<FlyBehaviour*>::iterator it = fb.begin(); it != fb.end(); ++it)
    {
        delete *it;
    }

    return 0;
}
