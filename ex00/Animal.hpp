#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string m_type;

public:
    // cannonical form
    Animal();
    Animal(Animal const &obj);
    Animal &operator=(Animal const &obj);
    virtual ~Animal();

    // member functions
    virtual void    makeSound() const;
    std::string getType() const;
};

#endif // ANIMAL_HPP