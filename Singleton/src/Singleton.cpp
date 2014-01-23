#include "Singleton.hpp"

Singleton* Singleton::m_Instance;
int Singleton::count = 0;

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
        //count++;
        return m_Instance;
    }

    m_Instance = new Singleton();
}
