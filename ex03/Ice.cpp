#include "Ice.hpp"

// canonical form
Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(Ice const &obj) : AMateria(obj)
{
    std::cout << "Ice copy constructor" << std::endl;
}

Ice &Ice::operator=(Ice const &obj)
{
    std::cout << "Ice assignment operator" << std::endl;
    if (this != &obj)
        AMateria::operator=(obj);
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
}

// member functions
AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
