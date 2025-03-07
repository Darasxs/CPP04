#ifndef "ICE_HPP"
# define "ICE_HPP"

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(Ice const &copy);
        Ice& operator=(const Ice &copy);
        ~Ice(void);

        AMateria* clone(void) const override;
        void use(ICharacter &target) override;
};

#endif