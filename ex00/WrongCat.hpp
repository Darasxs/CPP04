#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(std::string type);
        WrongCat(const WrongCat &wrongCat);
        WrongCat &operator=(const WrongCat &wrongCat);
        virtual ~WrongCat(void);

        void makeSound(void) const;
};

#endif