#include "Singleton.hpp"

Singleton* Singleton::m_Instance;

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
    delete m_Instance;
}

Singleton* Singleton::getInstance()
{
    if (m_Instance != nullptr)
    {
        return m_Instance;
    }

    m_Instance = new Singleton();
}
