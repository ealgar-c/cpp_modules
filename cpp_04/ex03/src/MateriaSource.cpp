/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:37:17 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 15:03:20 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "[MATERIASOURCE] Empty constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
	this->_matLearned = 0;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	std::cout << "[MATERIASOURCE] Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (toCopy._learnedMaterias[i] != NULL)
			this->_learnedMaterias[i] = toCopy._learnedMaterias[i]->clone();
		else
			this->_learnedMaterias[i] = NULL;
	}
	this->_matLearned = toCopy._matLearned;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "[MATERIASOURCE] Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i] != NULL)
			delete (this->_learnedMaterias[i]);
	}
}

MateriaSource &MateriaSource::operator= (const MateriaSource &toEqual)
{
	if (this == &toEqual)
	{
		for (int i = 0; i < 4; i++)
		{
			if (toEqual._learnedMaterias[i] != NULL)
				this->_learnedMaterias[i] = toEqual._learnedMaterias[i]->clone();
			else
				this->_learnedMaterias[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *newMateria)
{
	int i = 0;
	if (this->_matLearned == 4)
		std::cout << "The materia source is already full" << std::endl;
	else
	{
		while (i < 4)
		{
			if (this->_learnedMaterias[i] == NULL)
				break ;
			i++;
		}
		this->_learnedMaterias[i] = newMateria;
		this->_matLearned++;
	}
	std::cout << "Learned " << this->_learnedMaterias[i]->getType() << " materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < this->_matLearned)
	{
		if (this->_learnedMaterias[i]->getType().compare(type) == 0)
		{
			std::cout << "Created " << this->_learnedMaterias[i]->getType() << " materia" << std::endl;
			return (this->_learnedMaterias[i]);	
		}
		i++;
	}
	std::cout << type << " is not a learned materia" << std::endl;
	return (NULL);
}
