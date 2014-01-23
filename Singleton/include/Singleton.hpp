#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton
{
public:
    ~Singleton();
    static Singleton* getInstance();
    static int count;
private:
    Singleton();

    static Singleton* m_Instance;
};

#endif // SINGLETON_HPP
