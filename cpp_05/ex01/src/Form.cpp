/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:55:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:50:36 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

//	constructors
Form::Form(void): _name("DefaultFormName"), _requiredSign(1), _requiredExec(1)
{
}

Form::Form(const Form &toCopy): _name(toCopy.getName()), _requiredSign(toCopy.getRequiredSign()), _requiredExec(toCopy.getRequiredExec())
{
	this->_signed = toCopy._signed;
}

Form::Form(const std::string name, const int requiredSign, const int requiredExec): _name(name), _requiredSign(requiredSign), _requiredExec(requiredExec)
{
	try
	{
		if (requiredExec < 1 || requiredSign < 1)
			throw(Form::GradeTooHighException());
		if (requiredExec > 150 || requiredSign > 150)
			throw(Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Form::~Form(void)
{
}

Form &Form::operator=(const Form &toEqual)
{
	if (this != &toEqual)
		this->_signed = toEqual._signed;
	return (*this);
}

//	getters
const std::string	Form::getName(void) const
{
	return (this->_name);
}

const int	Form::getRequiredExec(void) const
{
	return (this->_requiredExec);
}

const int	Form::getRequiredSign(void) const
{
	return (this->_requiredSign);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

//	methods
void	Form::beSigned(Bureaucrat &bureau)
{
	try
	{
		if (bureau.getGrade() > this->getRequiredSign())
			throw(Form::GradeTooLowException());
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
const char *Form::GradeTooHighException::what() const throw()
{
	return ("[FORM EXCEPTION]: GRADE TOO HIGH");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("[FORM EXCEPTION]: GRADE TOO LOW");
}

// instertion operator overload
std::ostream	&operator<<(std::ostream &outs, const Form &formClass)
{
	
	outs << "Form " << formClass.getName() << ", with a required note to sign it of " << formClass.getRequiredSign() << " and a required note to execute it of " << formClass.getRequiredExec();
	if (formClass.getSigned())
		outs << " is signed";
	else
		outs << " is not signed";
	outs << std::endl;
	return (outs);
}
