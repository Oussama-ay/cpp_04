#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *materia[4];

public:
    // canonical form
    MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource &operator=(MateriaSource const &obj);
    ~MateriaSource();

    // member functions
    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif
