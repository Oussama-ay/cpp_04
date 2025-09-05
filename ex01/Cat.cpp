#include "Cat.hpp"

// canonical form
Cat::Cat()
{
    m_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal(obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &obj)
        Animal::operator=(obj);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

// member functions
void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
