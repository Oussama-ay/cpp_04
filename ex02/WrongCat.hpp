#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    // Orthodox Canonical Form
    WrongCat();
    WrongCat(WrongCat const &obj);
    WrongCat &operator=(WrongCat const &obj);
    ~WrongCat();

    // Member functions
    void makeSound() const;
};

#endif // WRONGCAT_HPP