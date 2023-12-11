/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:40:31 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/11 13:52:10 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->hit_pts = FragTrap::hit_pts;
	this->att_dmg = FragTrap::att_dmg;
	this->energy_pts = ScavTrap::energy_pts;
}

DiamondTrap::DiamondTrap(DiamondTrap &toCopy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap name assignation constructor called" << std::endl;
	this->name = name;
	this->hit_pts = FragTrap::hit_pts;
	this->att_dmg = FragTrap::att_dmg;
	this->energy_pts = ScavTrap::energy_pts;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "The DiamondTrap name is " << this->name << " and the ClapTrap name is " << this->ClapTrap::name << std::endl;
}