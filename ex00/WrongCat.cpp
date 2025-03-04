/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:17:58 by daras             #+#    #+#             */
/*   Updated: 2025/03/04 07:57:24 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "Default constructor for WrongCat called." << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "Named constructor for WrongCat called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "Copy constructor for WrongCat called." << std::endl;
    *this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
    if(this != &wrongCat)
        WrongAnimal::operator=(wrongCat);
    std::cout << "Copy assignment operator for WrongCat called." << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor for WrongCat called." << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound." << std::endl;
}