/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:21:01 by daras             #+#    #+#             */
/*   Updated: 2025/03/04 16:35:20 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];  
    }
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::newIdea(std::string idea)
{
    for (int i = 0; i < 100; i++)
    {
        if(ideas[i].empty())
        {
            ideas[i] = idea;
            return;
        }
    }
    std::cout << "Brain is full. No place left for a new idea." << std::endl;
}

void Brain::printIdeas(void)
{
    bool notEmpty = false;
    for(int i = 0; i < 100; i++)
    {
        if(!ideas[i].empty())
        {
            std::cout << "The idea number " << i + 1 << " is: " << ideas[i] << std::endl;
            notEmpty = true;   
        }
    }
    if (notEmpty == false)
        std::cout << "Brain is empty. No ideas to print." << std::endl;
}