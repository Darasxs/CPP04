#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
  public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual ~Animal(void);
	std::string getType(void) const;
	virtual void makeSound(void) const;

  protected:
	std::string type;
};

#endif