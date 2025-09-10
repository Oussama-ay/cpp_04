#include "Character.hpp"

// canonical form
Character::Character(std::string const &name) : name(name), equipped(0)
{
    std::cout << "Character parameterized constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const &src) : name(src.name), equipped(src.equipped)
{
    std::cout << "Character copy constructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (src.inventory[i])
            inventory[i] = src.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character &Character::operator=(Character const &rhs)
{
    std::cout << "Character assignment operator" << std::endl;
    if (this != &rhs)
    {
        name = rhs.name;
        equipped = rhs.equipped;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            if (rhs.inventory[i])
                inventory[i] = rhs.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character destructor" << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

// member functions
std::string const &Character::getName() const
{
    return (name);
}

void Character::equip(AMateria *m)
{
    if (equipped < 4 && m)
    {
        inventory[equipped] = m;
        equipped++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx] = NULL;
        equipped--;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}
