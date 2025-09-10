#include "MateriaSource.hpp"

// canonical form
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &obj)
{
    for (int i = 0; i < 4; i++)
    {
        if (obj.materia[i] != NULL)
            this->materia[i] = obj.materia[i]->clone();
        else
            this->materia[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (this != &obj)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->materia[i] != NULL)
            {
                delete this->materia[i];
                this->materia[i] = NULL;
            }
            if (obj.materia[i] != NULL)
                this->materia[i] = obj.materia[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {
            delete this->materia[i];
            this->materia[i] = NULL;
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
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            return;
        }
    }
    delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL && this->materia[i]->getType() == type)
            return (this->materia[i]->clone());
    }
    return (NULL);
}
