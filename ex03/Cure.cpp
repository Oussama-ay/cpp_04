#include "Cure.hpp"

// canonical form
Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &obj) : AMateria(obj)
{
    std::cout << "Cure copy constructor called" << std::endl;
    *this = obj;
}

Cure &Cure::operator=(Cure const &obj)
{
    std::cout << "Cure assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

// member functions
AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
