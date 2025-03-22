/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 08:12:13 by daras             #+#    #+#             */
/*   Updated: 2025/03/22 16:39:41 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	properAnimalCall(void)
{
	const Animal *meta = new Animal();
	const Animal *Reks = new Dog();
	const Animal *Borys = new Cat();
	std::cout << std::endl;
	std::cout << "meta is a " << meta->getType() << " " << std::endl;
	std::cout << "Reks is a " << Reks->getType() << " " << std::endl;
	std::cout << "Borys is a " << Borys->getType() << " " << std::endl;
	Reks->makeSound(); 
	Borys->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;
	delete meta;
	delete Reks;
	delete Borys;
}

void	wrongAnimalCall(void)
{
	const WrongAnimal *WrongBorys = new WrongCat();

	std::cout << std::endl;
	std::cout << "WrongBorys is a " << WrongBorys->getType() << " " << std::endl;
	WrongBorys->makeSound();

	std::cout << std::endl;
	delete WrongBorys;
}