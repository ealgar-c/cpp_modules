/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:53 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/17 19:35:49 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

// constructors
Bureaucrat::Bureaucrat(void): _name("Default")
{
	this->_grade = 75;
	std::cout << "[BUREAUCRAT] Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy): _name(toCopy.getName())
{
	this->_grade = toCopy.getGrade();
	std::cout << "[BUREAUCRAT] Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade): _name(name)
{
	std::cout << "[BUREAUCRAT] Data constructor called" << std::endl;
	try
	{
		if (grade < 1)
			throw(Bureaucrat::GradeTooHighException());
		else if (grade > 150)
			throw(Bureaucrat::GradeTooLowException());
		else
			this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = 150;
	}
}

// destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "[BUREAUCRAT] Destructor called" << std::endl;
}

// equal operator overload
Bureaucrat &Bureaucrat::operator= (const Bureaucrat &toEqual)
{
	if (this != &toEqual)
		this->_grade = toEqual.getGrade();
	return (*this);
}

// getters
const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

// methods
void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->getGrade() == 1)
			throw(Bureaucrat::GradeTooHighException());
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		if (this->getGrade() == 150)
			throw(Bureaucrat::GradeTooLowException());
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

// exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("[BUREAUCRAT EXCEPTION]: GRADE TOO HIGH");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("[BUREAUCRAT EXCEPTION]: GRADE TOO LOW");
}

// instertion operator overload
std::ostream	&operator<<(std::ostream &outs, const Bureaucrat &burClass)
{
	outs << burClass.getName() << ", bureaucrat grade " << burClass.getGrade() << "." << std::endl;
	return (outs);
}
