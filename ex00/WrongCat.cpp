#include "WrongCat.hpp"

// Orthodox Canonical Form
WrongCat::WrongCat()
{
    m_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &obj)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &obj)
        WrongAnimal::operator=(obj);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

// Member functions
void WrongCat::makeSound() const
{
    std::cout << "wrong meow" << std::endl;
}
