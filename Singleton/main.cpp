//STD
#include <iostream>

//SELF
#include "Singleton.hpp"

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        Singleton* s = Singleton::getInstance();
        std::cout << s->count << "\n";
    }

    return 0;
}
