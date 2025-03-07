/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:59:32 by daras             #+#    #+#             */
/*   Updated: 2025/03/07 09:12:01 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &copy) : AMateria(copy) {}

Ice& Ice::operator=(Ice const &copy)
{
    if (this != &copy)
        AMateria::operator=(copy);
    return (*this);
}

Ice::~Ice(void) {}

AMateria* Ice::clone(void) const
{
    return (new Ice(*this));
}

void use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}