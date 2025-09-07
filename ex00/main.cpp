#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "=== Correct Animals ===" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // cat sound
	j->makeSound(); // dog sound
	meta->makeSound(); // animal sound

	delete meta;
	delete j;
	delete i;

	std::cout << "\n=== Wrong Animals ===" << std::endl;

	const WrongAnimal* wrong = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound();

	delete wrong;

	return (0);
}
