/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:00:35 by daras             #+#    #+#             */
/*   Updated: 2025/03/03 21:03:59 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Default constructor for Dog called." << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Copy constructor for Dog called." << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    if(this != &dog)
        Animal::operator=(dog);
    std::cout << "Copy assignment operator for Dog called." << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "Destructor for Dog called." << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}