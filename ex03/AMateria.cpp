/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:26:16 by daras             #+#    #+#             */
/*   Updated: 2025/03/22 17:50:36 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("default") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AMateria::~AMateria(void) {}

std::string const &AMateria::getType(void) const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria is used on " << target.getName() << std::endl;
}