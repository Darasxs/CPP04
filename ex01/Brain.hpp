#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(const Brain &other);
        Brain& operator=(const Brain &other);
        ~Brain(void);

        void    newIdea(std::string &idea);
        void    printIdeas(void);

    private:
        std::string ideas[100];
}

#endif