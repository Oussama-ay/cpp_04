#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    // canonical form
    Ice();
    Ice(Ice const &obj);
    Ice &operator=(Ice const &obj);
    ~Ice();

    // member functions
    AMateria    *clone() const;
    void        use(ICharacter &target);
};

#endif
