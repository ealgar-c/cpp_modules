/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:44:25 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 13:37:34 by ealgar-c         ###   ########.fr       */
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

Cat &Cat::operator=(const Cat &toEqual)
{
	if (this != &toEqual)
	{
		_type = toEqual.getType();
		*this->_brain = *toEqual._brain;
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}

void	Cat::shareThoughts(void) const
{
	std::cout << "idea 1: " << this->_brain->getIdea(0) << std::endl;
	std::cout << "idea 2: " << this->_brain->getIdea(1) << std::endl;
	std::cout << "idea 3: " << this->_brain->getIdea(2) << std::endl;
}

void	Cat::thinkSomething(std::string thought) const
{
	this->_brain->setIdea(thought);
}
