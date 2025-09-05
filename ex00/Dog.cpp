#include "Dog.hpp"

// canonical form
Dog::Dog()
{
	m_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &obj)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// member functions
void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
