#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string m_type;

public:
    // Orthodox Canonical Form
	WrongAnimal();
	WrongAnimal(WrongAnimal const &obj);
	WrongAnimal &operator=(WrongAnimal const &obj);
	~WrongAnimal();

    // Member functions
	void	makeSound() const;
	std::string		getType() const;
};

#endif // WRONGANIMAL_HPP