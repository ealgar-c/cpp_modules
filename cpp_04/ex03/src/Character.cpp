/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:34:26 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 13:52:26 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

int Character::_uneqSize = 0;
AMateria **Character::_uneqMaterias = NULL;

Character::Character(void)
{
	this->_name = "generic name";
	for (int i = 0; i < 3; i++)
		this->_inventory[i] = NULL;
	this->_matEquiped = 0;
	std::cout << "[CHARACTER] Empty constructor called" << std::endl;
}

Character::Character(const Character &toCopy)
{
	this->_name = toCopy.getName();
	for (int i = 0; i < 3; i++)
		this->_inventory[i] = toCopy._inventory[i]->clone();
	this->_matEquiped = toCopy._matEquiped;
	std::cout << "[CHARACTER] Copy constructor called" << std::endl;
}

Character::Character(const std::string name)
{
	this->_name = name;
	for (int i = 0; i < 3; i++)
		this->_inventory[i] = NULL;
	this->_matEquiped = 0;
	std::cout << "[CHARACTER] Name constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "[CHARACTER] Destructor called" << std::endl;
}

Character &Character::operator=(const Character &toEqual)
{
	if (this != &toEqual)
	{
		this->_name = toEqual.getName();
		for (int i = 0; i < 3; i++)
		{
			if (this->_inventory[i] != NULL)
				delete (this->_inventory[i]);
			if (toEqual._inventory[i] != NULL)
				this->_inventory[i] = toEqual._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;

	if (this->_matEquiped == 4)
	{
		std::cout << this->getName()<< "\'s inventory is already full" << std::endl;
		this->saveToUneq(m);
	}
	else
	{
		while (this->_inventory[i] != NULL)
			i++;
		this->_inventory[i] = m;
		this->_matEquiped++;
		std::cout << "Equiped a " << m->getType() << " type materia in the " << i << " slot of " << this->getName() << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "The received index is not valid" << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << "This slot is empty" << std::endl;
	else
	{
		this->saveToUneq(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		this->_matEquiped--;
		std::cout << "Unequiped " << this->getName() << "\'s slot number " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "The received index is not valid" << std::endl;
	else if (this->_inventory[idx] == NULL)
		std::cout << "This slot is empty" << std::endl;
	else
		this->_inventory[idx]->use(target);
}

void	Character::saveToUneq(AMateria *discarded)
{
	this->_uneqSize++;
	AMateria **newMatrix = new AMateria *[this->_uneqSize];
	int i = 0;
	while (i < this->_uneqSize - 1)
	{
		newMatrix[i] = this->_uneqMaterias[i];
		i++;
	}
	newMatrix[i] = discarded;
	if (this->_uneqMaterias != NULL)
		delete[] this->_uneqMaterias;
	this->_uneqMaterias = newMatrix;
}
