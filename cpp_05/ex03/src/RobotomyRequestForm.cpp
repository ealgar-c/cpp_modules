/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:44:34 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/09 01:09:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", "DefaultTarget", 72, 45)
{
	std::cout << "[ROBOTOMY REQUEST FORM] Empty Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy): AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getRequiredSign(), toCopy.getRequiredExec())
{
	std::cout << "[ROBOTOMY REQUEST FORM] Copy Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", target, 72, 45)
{
	std::cout << "[ROBOTOMY REQUEST FORM] Default Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "[ROBOTOMY REQUEST FORM] Destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &toEqual)
{
	if (this != &toEqual)
	{
		this->_signed = toEqual._signed;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (!this->getSigned())
		throw(RobotomyRequestForm::FormNotSigned());
	else if (executor.getGrade() > this->getRequiredExec())
		throw(RobotomyRequestForm::GradeTooLowException());
	else
	{
		if (std::rand() % 2 == 0) //FIXME: me da que esto no funciona asi
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << this->_target << "'s robotomy failed" << std::endl;
	}
}
