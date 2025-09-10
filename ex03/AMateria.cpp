#include "AMateria.hpp"

// canonical form
AMateria::AMateria() : type("")
{
    std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(AMateria const &obj) : type(obj.type)
{
    std::cout << "AMateria copy constructor" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &obj)
{
    std::cout << "AMateria assignment operator" << std::endl;
    if (this != &obj)
    {
        type = obj.type;
    }
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
}

// parameterized constructor
AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria parameterized constructor" << std::endl;
}

// member functions
std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria use on " << target.getName() << std::endl;
}
