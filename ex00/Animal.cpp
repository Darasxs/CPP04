/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:26:52 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/02/24 16:42:59 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal")
{
	std::cout << "Default constructor for Animal called." << std::endl;
}

Animal::Animal(std::string type): type(type)
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
	if(this != &animal)
		this->type = animal.type;
	std::cout << 
}