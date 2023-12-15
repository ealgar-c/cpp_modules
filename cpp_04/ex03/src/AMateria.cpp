/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:27:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 12:54:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

AMateria::AMateria(void)
{
	this->_type = "Undefined type";
	std::cout << "[AMATERIA] Empty constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &toCopy)
{
	this->_type = toCopy._type;
	std::cout << "[AMATERIA] Copy constructor called" << std::endl;

}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "[AMATERIA] Type constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "[AMATERIA] Destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &toEqual)
{
	if (this != &toEqual)
		this->_type = toEqual.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "* Undefined attack to " << target.getName() << " *" << std::endl;
}