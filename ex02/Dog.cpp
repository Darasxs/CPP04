/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:00:35 by daras             #+#    #+#             */
/*   Updated: 2025/03/22 15:55:53 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Default constructor for Dog called." << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &dog) : AAnimal(dog)
{
	std::cout << "Copy constructor for Dog called." << std::endl;
	brain = new Brain(*dog.getBrain());
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
			delete brain;

	if (this != &dog)
	{
		AAnimal::operator=(dog);
		if (brain)
		brain = new Brain(*dog.getBrain());
	}
	std::cout << "Copy assignment operator for Dog called." << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete	brain;

	std::cout << "Destructor for Dog called." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (brain);
}