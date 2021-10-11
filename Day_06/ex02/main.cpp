#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generator(void)
{
    int rdm = rand() % 3;
    if (rdm == 0)
        return (new A());
    else if (rdm == 1)
        return (new B());
    else
        return (new C());
}

void identify(Base* p)
{
    Base *ptr;
    try
    {
        ptr = &dynamic_cast<A&>(*p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast& e){}
    try
    {
        ptr = &dynamic_cast<B&>(*p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast& e){}
    try
    {
        ptr = &dynamic_cast<C&>(*p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast& e){}
}

void identify(Base& p)
{
    Base *ptr;
    try
    {
        ptr = &dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast& e){}
    try
    {
        ptr = &dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(std::bad_cast& e){}
    try
    {
        ptr = &dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(std::bad_cast& e){}
}

int main()
{
    srand(time(NULL));
    Base *test = generator();
    Base &testo = *test;

    identify(test);
    identify(testo);
    delete(test);

    test = generator();
    identify(test);
    identify(testo);
    delete(test);

    test = generator();
    identify(test);
    identify(testo);
    delete(test);

    test = generator();
    identify(test);
    identify(testo);
    delete(test);

    test = generator();
    identify(test);
    identify(testo);
    delete(test);

    test = generator();
    identify(test);
    identify(testo);
    delete(test);

    A a;
    B b;
    C c;
    test = &a;
    Base &a_ref = *test;
    identify(test);
    identify(a_ref);
    test = &b;
    Base &b_ref = *test;
    identify(test);
    identify(b_ref);
    test = &c;
    Base &c_ref = *test;
    identify(test);
    identify(c_ref);
}