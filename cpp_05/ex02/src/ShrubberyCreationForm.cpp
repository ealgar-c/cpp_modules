/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:15:04 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:47:28 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", "DefaultTarget", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy): AForm(toCopy.getName(), toCopy.getTarget(), toCopy.getRequiredSign(), toCopy.getRequiredExec())
{
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): AForm("ShrubberyCreationForm", target, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toEqual)
{
	if (this != &toEqual)
	{
		this->_signed = toEqual._signed;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

	if (!this->getSigned())
		throw(ShrubberyCreationForm::FormNotSigned());
	else if (executor.getGrade() > this->getRequiredExec())
		throw(ShrubberyCreationForm::GradeTooLowException());
	else
	{
		std::ofstream	file((this->getTarget() + "_shrubbery").c_str());
		file << "               ,@@@@@@@," << std::endl
			<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
			<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
			<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
			<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
			<< "       |o|        | |         | |" << std::endl
			<< "       |.|        | |         | |" << std::endl
			<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	}
}
