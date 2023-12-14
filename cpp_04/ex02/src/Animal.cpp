/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:04:53 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 14:09:58 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal()
{
	_type = "Generic animal";
	std::cout << "[ANIMAL] Default Constructor called" << std::endl;
}

Animal::Animal(Animal &toCopy)
{
	_type = toCopy.getType();
	std::cout << "[ANIMAL] Copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[ANIMAL] Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
	}
	return *this;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
