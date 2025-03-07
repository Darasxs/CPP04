#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materias[4];
    
    public:
        MateriaSource(void);
        MateriaSource(MateriaSource const &copy);
        MateriaSource& operator=(MateriaSource const &copy);
        ~MateriaSource(void);

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const &type);
}

#endif