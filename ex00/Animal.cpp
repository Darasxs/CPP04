/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:26:52 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/02/24 17:13:31 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Default constructor for Animal called." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Named constructor for Animal called." << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Copy constructor for Animal called." << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->type = animal.type;
	std::cout << "Copy assignment operator for Animal called." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor for Animal called." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal sound." << std::endl;
}
