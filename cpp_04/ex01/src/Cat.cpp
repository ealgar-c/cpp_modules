/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:44:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 14:26:21 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	this->_brain = new Brain();
	std::cout << "[CAT] Default Constructor called" << std::endl;
}

Cat::Cat(Cat &toCopy)
{
	_type = toCopy.getType();
	this->_brain = toCopy._brain;
	std::cout << "[CAT] Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete (this->_brain);
	std::cout << "[CAT] Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
		this->_brain = toEqual._brain;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}
