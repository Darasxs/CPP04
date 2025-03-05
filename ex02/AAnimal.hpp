#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
  public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(const AAnimal &AAnimal);
	AAnimal &operator=(const AAnimal &AAnimal);
	virtual ~AAnimal(void);
	
	std::string getType(void) const;
	virtual void makeSound(void) const = 0;

  protected:
	std::string type;
};

#endif