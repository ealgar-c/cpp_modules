/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:54:37 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 11:54:22 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "[ICE] Empty constructor called" << std::endl;
}

Ice::Ice(const Ice &toCopy)
{
	this->_type = toCopy.getType();
	std::cout << "[ICE] Copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[ICE] Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy.getType();
	return (*this);
}

Ice			*Ice::clone(void) const
{
	Ice *cloned = new Ice(*this);
	return (cloned);
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}