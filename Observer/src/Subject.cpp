#include "Subject.hpp"

void Subject::notifyObservers(NotificationType nt)
{
    for (std::list<std::unique_ptr<Observer>>::iterator it = m_Observers.begin(); it != m_Observers.end(); ++it)
    {
        (*it)->handleNotification(nt);
    }
}
