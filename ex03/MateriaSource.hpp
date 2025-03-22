#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *materias[4];

  public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &copy);
	~MateriaSource(void);

	void learnMateria(AMateria *m) override;
	AMateria *createMateria(std::string const &type) override;
};

#endif