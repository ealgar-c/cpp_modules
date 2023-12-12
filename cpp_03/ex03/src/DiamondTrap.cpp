/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:40:31 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/12 13:40:57 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->energy_pts = ScavTrap::_energyPts;
}

DiamondTrap::DiamondTrap(DiamondTrap &toCopy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap name assignation constructor called" << std::endl;
	this->name = name;
	this->energy_pts = ScavTrap::_energyPts;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "The DiamondTrap name is " << this->name << " and the ClapTrap name is " << this->ClapTrap::name << std::endl;
}

void	DiamondTrap::showValues(void)
{
	std::cout << "Energy pts: " << this->energy_pts << " hit pts: " << this->hit_pts << " att damage: " << this->att_dmg << std::endl;
}