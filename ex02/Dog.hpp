#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
  public:
	Dog(void);
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	~Dog(void);

	void makeSound(void) const override;
	Brain *getBrain(void) const;

  private:
	Brain *brain;
};

#endif