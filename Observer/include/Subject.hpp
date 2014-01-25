#ifndef SUBJECT_HPP
#define SUBJECT_HPP

//STD
#include <list>
#include <memory>

//SELF
#include "Observer.hpp"
#include "Notifications.hpp"

class Subject
{
public:
    Subject() = default;
    virtual ~Subject() = default;

    void notifyObservers(NotificationType nt);
private:
    std::list<std::unique_ptr<Observer>> m_Observers;
};

#endif //SUBJECT_HPP
