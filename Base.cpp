#include "Base.hpp"

Base* Base::generate(){

    std::srand(std::time(0));
    int random_nb = std::rand() % 3;
    switch(random_nb){
        case 0:
            return(new A());
        case 1:
            return(new B());
        case 2:
            return(new C());
    }
    return NULL;
}

void Base::identify(Base* p){

    if(dynamic_cast<A*>(p) != NULL)
    {
        std::cout << "p is from class A" << std::endl;
        return;
    }
    if(dynamic_cast<B*>(p) != NULL)
    {
        std::cout << "p is from class B" << std::endl;
        return;
    }
    if(dynamic_cast<C*>(p) != NULL)
    {
        std::cout << "p is from class C" << std::endl;
        return;
    }
    else
        std::cout << "p is from an unknown class" << std::endl;
}

void Base::identify(Base& ref){

    try
    {
        dynamic_cast<A&>(ref);
        std::cout << "ref is from class A" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
        return;
    }
    try
    {
        dynamic_cast<B&>(ref);
        std::cout << "ref is from class B" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
        return
    }
    try
    {
        dynamic_cast<C&>(ref);
        std::cout << "ref is from class C" << std::endl;
    }
    catch(std::bad_cast &bc)
    {
        return
    }
}

void Base::identify(Base& ref) 
{
    try 
    {
        dynamic_cast<A&>(ref);
        std::cout << "ref is from class A" << std::endl;
    } 
    catch (std::bad_cast &bc) 
    {
        try 
        {
            dynamic_cast<B&>(ref);
            std::cout << "ref is from class B" << std::endl;
        } 
        catch (std::bad_cast &bc) 
        {
            try 
            {
                dynamic_cast<C&>(ref);
                std::cout << "ref is from class C" << std::endl;
            } 
            catch (std::bad_cast &bc) 
            {
                std::cout << "ref is from an unknown class" << std::endl;
            }
        }
    }
}