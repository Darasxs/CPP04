#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"
# include <iostream>

class AMateria
{
  protected:
	std::string type;

  public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);
	AMateria &operator=(AMateria const &copy);
	virtual ~AMateria(void);

	std::string const &getType(void) const;
	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif

// an abstract class (an interface) is a class that cannot be instantiated directly on its own,
// but must be a base class for other classes; it is degisned to be inherited by other classes
// an abstract class is a class that has at least one pure virtual function