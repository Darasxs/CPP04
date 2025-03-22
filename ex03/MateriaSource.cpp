/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 09:56:38 by daras             #+#    #+#             */
/*   Updated: 2025/03/22 18:37:49 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.materias[i])
			materias[i] = copy.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materias[i])
				delete materias[i];
			if (copy.materias[i])
				materias[i] = copy.materias[i]->clone();
			else
				materias[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
			delete materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			materias[i] = m;
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	return (NULL);
}
