/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:12:21 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:42:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "[DOG] Default Constructor called" << std::endl;
}

Dog::Dog(Dog &toCopy)
{
	_type = toCopy.getType();
	std::cout << "[DOG] Copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[DOG] Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "guau guau" << std::endl;
}
