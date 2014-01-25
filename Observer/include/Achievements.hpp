#ifndef ACHIEVEMENTS_HPP
#define ACHIEVEMENTS_HPP

//SELF
#include "Observer.hpp"
#include "Subject.hpp"

class Achievements : public Observer,
                     public Subject
{
public:
    Achievements();
    void update();
    virtual void handleNotifications(NotificationType nt);
};

#endif // ACHIEVEMENTS_HPP
