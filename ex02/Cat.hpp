#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
  public:
	Cat(void);
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
	~Cat(void);

	void makeSound(void) const override;
	Brain *getBrain(void) const;

  private:
	Brain *brain;
};

#endif