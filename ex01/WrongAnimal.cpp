#include "WrongAnimal.hpp"

// canonical form
WrongAnimal::WrongAnimal() : m_type("")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &obj)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

// member functions
void WrongAnimal::makeSound() const
{
    std::cout << m_type << std::endl;
    std::cout << "wrong animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (m_type);
}
