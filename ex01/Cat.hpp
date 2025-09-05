#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	// canonical form
	Cat();
	Cat(Cat const &obj);
	Cat &operator=(Cat const &obj);
	virtual ~Cat();

	// member functions
	virtual void	makeSound() const;
};

#endif // CAT_HPP