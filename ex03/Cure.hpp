#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    // canonical form
    Cure();
    Cure(Cure const &obj);
    Cure &operator=(Cure const &obj);
    ~Cure();

    // member functions
    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif
