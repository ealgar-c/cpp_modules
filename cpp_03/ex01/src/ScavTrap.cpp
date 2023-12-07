/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:03:10 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 13:36:41 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ClapTrap empty constructor called" << std::endl;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->att_dmg = 20;
	this->gateKeeper = false;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "ScavTrap name assignation constructor called" << std::endl;
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->att_dmg = 20;
	this->gateKeeper = false;
}

ScavTrap::ScavTrap(ScavTrap &toCopy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->att_dmg << " points of damage!" << std::endl;
	this->energy_pts--;
}

void	ScavTrap::guardGate(void)
{
	if (!this->gateKeeper)
	{
		this->gateKeeper = true;
		std::cout << "ScavTrap " << this->name << " is now on guard mode" << std::endl;
	}
	else
	{
		this->gateKeeper = false;
		std::cout << "ScavTrap " << this->name << " is no longer on guard mode" << std::endl;
	}
}