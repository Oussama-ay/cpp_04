#include "Animal.hpp"

// canonical form
Animal::Animal() : m_type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(Animal const &obj)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &obj)
        m_type = obj.m_type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

// member functions

std::string Animal::getType() const
{
    return (m_type);
}
