/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:13:17 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/22 15:55:49 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Default constructor for Cat called." << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &cat) : AAnimal(cat)
{
	std::cout << "Copy constructor for Cat called." << std::endl;
	brain = new Brain(*cat.getBrain());
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
			delete brain;

	if (this != &cat)
	{
		AAnimal::operator=(cat);
		if (brain)
		brain = new Brain(*cat.getBrain());
	}
	std::cout << "Copy assignment operator for Cat called." << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	delete	brain;

	std::cout << "Destructor for Cat called." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (brain);
}