/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:40:29 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/07 16:57:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap empty constructor called" << std::endl;
	this->energy_pts = 100;
	this->hit_pts = 100;
	this->att_dmg = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "FragTrap name assignation constructor called" << std::endl;
	this->name = name;
	this->energy_pts = 100;
	this->hit_pts = 100;
	this->att_dmg = 30;
}

FragTrap::FragTrap(FragTrap &toCopy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_pts == 0)
	{
		std::cout << this->name << " is already dead ... " << std::endl;
		return ;
	}
	std::cout << this->name << " wanna high five!" << std::endl;
}