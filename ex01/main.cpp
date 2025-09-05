#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Correct Animals ===" << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // should output cat sound
    j->makeSound(); // should output dog sound
    meta->makeSound(); // should output generic animal sound

    delete meta;
    delete j;
    delete i;

    std::cout << "\n=== Wrong Animals ===" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();

    std::cout << wrongI->getType() << " " << std::endl;
    wrongI->makeSound(); // will output WrongAnimal sound (not Cat), because no virtual
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongI;

    return 0;
}
