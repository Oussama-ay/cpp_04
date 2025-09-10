#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	// canonical form
	Dog();
	Dog(Dog const &obj);
	Dog &operator=(Dog const &obj);
	~Dog();

	// member functions
	void	makeSound() const;
};

#endif // DOG_HPP