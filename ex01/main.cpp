/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:26:36 by dpaluszk          #+#    #+#             */
/*   Updated: 2025/03/22 16:43:31 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal *animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << std::endl;

	const Cat *Marcin = new Cat();
	const Dog *Kazik = new Dog();
	std::cout << std::endl;

	std::cout << "The brains should be empty at this point: " << std::endl;
	Kazik->getBrain()->printIdeas();
	Marcin->getBrain()->printIdeas();
	std::cout << std::endl;
	std::cout << "Now we will fill the brains with some ideas: " << std::endl;
	Marcin->getBrain()->newIdea("I'm a cat.");
	Marcin->getBrain()->newIdea("I'm hungry.");
	Marcin->getBrain()->newIdea("I'm sleepy.");
	Marcin->getBrain()->newIdea("I'm bored.");
	Marcin->getBrain()->printIdeas();
	std::cout << std::endl;
	Kazik->getBrain()->newIdea("I'm a dog.");
	Kazik->getBrain()->newIdea("I'm busy.");
	Kazik->getBrain()->newIdea("I want to go for a walk.");
	Kazik->getBrain()->newIdea("I'm thirsty.");
	Kazik->getBrain()->printIdeas();
	std::cout << std::endl;
	return (0);
}