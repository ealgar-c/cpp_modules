/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 14:48:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap empty constructor called" << std::endl;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->att_dmg = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "ClapTrap name assignation constructor called" << std::endl;
	this->name = name;
	this->hit_pts = 10;
	this->energy_pts = 10;
	this->att_dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap &toCopy)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &toEqual)
{
	this->name = toEqual.name;
	this->hit_pts = toEqual.hit_pts;
	this->energy_pts = toEqual.energy_pts;
	this->att_dmg = toEqual.att_dmg;
	return(*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energy_pts == 0)
	{
		std::cout << this->name << " does not have enough energy points ... " << std::endl;
		return ;
	}
	if (this->hit_pts == 0)
	{
		std::cout << this->name << " is already dead ... " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->att_dmg << " points of damage!" << std::endl;
	this->energy_pts--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts == 0)
	{
		std::cout << this->name << " is already dead ..." << std::endl;
		return ;
	}
	else if (this->hit_pts < amount)
		this->hit_pts = 0;
	else
		this->hit_pts -= amount;
	std::cout << "ClapTrap " << this->name << " receives "<< amount << " damage, it now has "<< this->hit_pts << " hit points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pts == 0)
	{
		std::cout << this->name << " does not have enough energy points ... " << std::endl;
		return ;
	}
	if (this->hit_pts == 0)
	{
		std::cout << this->name << " is already dead ... " << std::endl;
		return ;
	}
	this->hit_pts += amount;
	std::cout << "ClapTrap " << this->name << " repairs itself " << amount << " hit points, it now has " << this->hit_pts << " hit points!" << std::endl;
	this->energy_pts--;
}
