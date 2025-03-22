#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure(void);
	Cure(Cure const &copy);
	Cure &operator=(const Cure &copy);
	~Cure(void);

	AMateria *clone(void) const override;
	void use(ICharacter &target) override;
}

#endif