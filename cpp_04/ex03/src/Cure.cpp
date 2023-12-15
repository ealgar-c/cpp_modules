/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:25:38 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 12:51:11 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "[CURE] Empty constructor called" << std::endl;
}

Cure::Cure(const Cure &toCopy)
{
	this->_type = toCopy.getType();
	std::cout << "[CURE] Copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "[CURE] Destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &toCopy)
{
	if (this != &toCopy)
		this->_type = toCopy.getType();
	return (*this);
}

Cure			*Cure::clone(void) const
{
	Cure *cloned = new Cure(*this);
	return (cloned);
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}