/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:26:52 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/05 10:46:35 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("AAnimal")
{
	std::cout << "Default constructor for AAnimal called." << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "Named constructor for AAnimal called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &AAnimal)
{
	std::cout << "Copy constructor for AAnimal called." << std::endl;
	*this = AAnimal;
}

AAnimal &AAnimal::operator=(const AAnimal &AAnimal)
{
	if (this != &AAnimal)
		this->type = AAnimal.type;
	std::cout << "Copy assignment operator for AAnimal called." << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor for AAnimal called." << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}