/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/08 14:17:46 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"

//	constructors
AForm::AForm(void): _name("DefaultFormName"), _requiredSign(1), _requiredExec(1)
{
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const AForm &toCopy): _name(toCopy.getName()), _target(toCopy.getTarget()), _requiredSign(toCopy.getRequiredSign()), _requiredExec(toCopy.getRequiredExec())
{
	this->_signed = toCopy._signed;
	std::cout << "[AForm] Copy constructor called" << std::endl;
}

AForm::AForm(const std::string name, const std::string target, const int requiredSign, const int requiredExec): _name(name), _target(target), _requiredSign(requiredSign), _requiredExec(requiredExec)
{
	try
	{
		if (requiredExec < 1 || requiredSign < 1)
			throw(AForm::GradeTooHighException());
		if (requiredExec > 150 || requiredSign > 150)
			throw(AForm::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "[AForm] Data constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "[AForm] Destructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &toEqual)
{
	if (this != &toEqual)
		this->_signed = toEqual._signed;
	return (*this);
}

//	getters
const std::string	AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getRequiredExec(void) const
{
	return (this->_requiredExec);
}

int	AForm::getRequiredSign(void) const
{
	return (this->_requiredSign);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

const std::string	AForm::getTarget(void) const
{
	return (this->_target);
}

//	methods
void	AForm::beSigned(Bureaucrat &bureau)
{
	try
	{
		if (bureau.getGrade() > this->getRequiredSign())
			throw(AForm::GradeTooLowException());
		else
		{
			this->_signed = true;
			std::cout << bureau.getName() << " signed " << this->getName() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

// exceptions
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("[AForm EXCEPTION]: GRADE TOO HIGH");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("[AForm EXCEPTION]: GRADE TOO LOW");
}

const char *AForm::FormNotSigned::what() const throw()
{
	return ("[AForm EXCEPTION]: FORM NOT SIGNED");
}

// instertion operator overload
std::ostream	&operator<<(std::ostream &outs, const AForm &formClass)
{
	
	outs << "Form " << formClass.getName() << ", with a required note to sign it of " << formClass.getRequiredSign() << " and a required note to execute it of " << formClass.getRequiredExec();
	if (formClass.getSigned())
		outs << " is signed";
	else
		outs << " is not signed";
	outs << std::endl;
	return (outs);
}
