/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:54:21 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 13:37:58 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "[BRAIN] Default Constructor called" << std::endl;
	this->_ideasNbr = 0;
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "[BRAIN] Copy constructor called" << std::endl;
	for (int i = 0; i <= 100; i++)
			this->_ideas[i] = toCopy._ideas[i];
	this->_ideasNbr = 0;
}

Brain::~Brain()
{
	std::cout << "[BRAIN] Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &toEqual)
{
	
	for (int i = 0; i < toEqual._ideasNbr; i++)
		this->_ideas[i] = toEqual._ideas[i];
	this->_ideasNbr = toEqual._ideasNbr;
	return (*this);
}

void	Brain::setIdea(std::string thought)
{
	if (this->_ideasNbr == 100)
		std::cout << "This brain is already full of thoughts ..." << std::endl;
	else
	{
		this->_ideas[_ideasNbr] = thought;
		this->_ideasNbr++;
	}
	
}

std::string Brain::getIdea(const int index) const
{
	if (index >= this->_ideasNbr)
		std::cout << "This brain doesnt have that much ideas yet ...";
	else
		return (this->_ideas[index]);
	return ("");
}
