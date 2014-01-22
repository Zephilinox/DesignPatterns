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
    std::vector<std::unique_ptr<Duck>> Ducks;
    Ducks.push_back(std::unique_ptr<MallardDuck> (new MallardDuck));
    Ducks.push_back(std::unique_ptr<RedheadDuck> (new RedheadDuck));
    Ducks.push_back(std::unique_ptr<RubberDuck> (new RubberDuck));

    std::cout << "\n";

    for (std::vector<std::unique_ptr<Duck>>::iterator it = Ducks.begin(); it != Ducks.end(); ++it)
    {
        (*it)->quack();
        (*it)->swim();
        (*it)->fly();
        (*it)->display();
        std::cout << "\n";
    }

    return 0;
}
