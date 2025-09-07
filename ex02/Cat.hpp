#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;

public:
	// canonical form
	Cat();
	Cat(Cat const &obj);
	Cat &operator=(Cat const &obj);
	virtual ~Cat();

	// member functions
	virtual void	makeSound() const = 0;
};

#endif // CAT_HPP