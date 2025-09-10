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
	~Cat();

	// member functions
	void	makeSound() const;
};

#endif // CAT_HPP