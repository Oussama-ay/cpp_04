#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    // canonical form
    AMateria();
    AMateria(AMateria const &obj);
    AMateria &operator=(AMateria const &obj);
    virtual ~AMateria();

    // parameterized constructor
    AMateria(std::string const &type);

    // member functions
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
