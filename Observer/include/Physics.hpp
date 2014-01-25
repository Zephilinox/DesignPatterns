#ifndef PHYSICS_HPP
#define PHYSICS_HPP

//SEF
#include "Observer.hpp"
#include "Subject.hpp"

class Physics : public Observer,
                public Subject
{
public:
    Physics();
    void update();
    virtual void handleNotifications(NotificationType);
};

#endif // PHYSICS_HPP
