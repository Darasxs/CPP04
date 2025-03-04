/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:13:17 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/03 11:24:53 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Default constructor for Cat called." << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
    std::cout << "Copy constructor for Cat called." << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    if(this != &cat)
        Animal::operator=(cat);
    std::cout << "Copy assignment operator for Cat called." << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "Destructor for Cat called." << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}