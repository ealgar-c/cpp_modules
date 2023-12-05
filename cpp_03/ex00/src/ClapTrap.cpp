/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:42:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/05 17:59:15 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &toEqual)
{
	this->name = toEqual.name;
	this->hit_pts = toEqual.hit_pts;
	this->energy_pts = toEqual.energy_pts;
	this->att_dmg = toEqual.att_dmg;
	return(*this);
}