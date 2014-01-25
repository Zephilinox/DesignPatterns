#include "Physics.hpp"

//STD
#include <iostream>

Physics::Physics()
{
}

void Physics::update()
{
    notifyObservers(NotificationType::SomethingPhysicsRelated);
}

void Physics::handleNotifications(NotificationType nt)
{
    switch (nt)
    {
        case NotificationType::SomethingAchievementRelated:
            std::cout << "Physics handled something due to a notification related to achievements\n";
        default:
            std::cout << "Physics didn't care about one of the notifications it received\n";
    }
}
