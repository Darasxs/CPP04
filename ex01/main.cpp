/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daras <daras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:26:36 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/04 09:17:30 by daras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int	main(void)
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
	return (0);
}