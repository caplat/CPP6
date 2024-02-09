#include "Base.hpp"

int main()
{
    Base* mystery = Base::generate();
    Base* mystery_ref = Base::generate();
    A* temoin1 = new A();
    B* temoin2 = new B();
    C* temoin3 = new C();

    Base::identify(temoin1);
    Base::identify(temoin2);
    Base::identify(temoin3);
    std::cout << std::endl;
    Base::identify(mystery);
    std::cout << std::endl;
    Base::identify(*mystery_ref);

    delete(mystery);
    delete(temoin1);
    delete(temoin2);
    delete(temoin3);
    return(0);
}