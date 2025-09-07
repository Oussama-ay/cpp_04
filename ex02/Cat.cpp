#include "Cat.hpp"

// canonical form
Cat::Cat()
{
    m_type = "Cat";
	brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &obj) : Animal(obj)
{
	brain = new Brain();
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &obj)
		brain = obj.brain;
    return (*this);
}

Cat::~Cat()
{
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

// member functions
void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
