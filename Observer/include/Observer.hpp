#ifndef OBSERVER_HPP
#define OBSERVER_HPP

//SELF
#include "Notifications.hpp"

class Observer
{
public:
    Observer() = default;
    virtual ~Observer() = default;
    virtual void handleNotification(NotificationType);
};

#endif //OBSERVER_HPP
