#include "MateriaSource.hpp"

// canonical form
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj.materia[i] != NULL)
            materia[i] = obj.materia[i]->clone();
        else
            materia[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (materia[i] != NULL)
            {
                delete materia[i];
                materia[i] = NULL;
            }
            if (obj.materia[i] != NULL)
                materia[i] = obj.materia[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL)
        {
            delete materia[i];
            materia[i] = NULL;
        }
    }
}

// member functions
void MateriaSource::learnMateria(AMateria *m)
{
    if (m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] == NULL)
        {
            materia[i] = m;
            return;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] != NULL && materia[i]->getType() == type)
            return (materia[i]->clone());
    }
    return (NULL);
}
