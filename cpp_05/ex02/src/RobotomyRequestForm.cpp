/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:44:34 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:47:18 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", "DefaultTarget", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy): AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getRequiredSign(), toCopy.getRequiredExec())
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", target, 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
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
		if (std::rand() % 2 == 0)
			std::cout << this->_target << " has been robotomized" << std::endl;
		else
			std::cout << this->_target << "'s robotomy failed" << std::endl;
	}
}
