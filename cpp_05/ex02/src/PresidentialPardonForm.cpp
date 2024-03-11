/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:17:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:46:54 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"
#include "../include/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", "DefaultTarget", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy): AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getRequiredSign(), toCopy.getRequiredExec())
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &toEqual)
{
	if (this != &toEqual)
	{
		this->_signed = toEqual._signed;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

	if (!this->getSigned())
		throw(PresidentialPardonForm::FormNotSigned());
	else if (executor.getGrade() > this->getRequiredExec())
		throw(PresidentialPardonForm::GradeTooLowException());
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
