#include "Achievements.hpp"

//STD
#include <iostream>

Achievements::Achievements()
{
}

void Achievements::update()
{
    notifyObservers(NotificationType::SomethingAchievementRelated);
}

void Achievements::handleNotifications(NotificationType nt)
{
    switch (nt)
    {
        case NotificationType::SomethingPhysicsRelated:
            std::cout << "Achievements handled something due to a notification related to physics\n";
        default:
            std::cout << "Achievements didn't care about one of the notifications it received\n";
    }
}
