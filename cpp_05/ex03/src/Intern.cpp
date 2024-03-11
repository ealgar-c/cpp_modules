/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:37:35 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:27:12 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"
#include "../include/AForm.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern &toCopy)
{
	(void)toCopy;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &toEqual)
{
	(void)toEqual;
	return(*this);
}

AForm	*Intern::makeForm(const std::string formName, const std::string formTarget) const
{
	std::string	formTypes[3] = {"RobotomyRequestForm", "ShrubberyCreationForm", "PresidentialPardonForm"};
	int i = 0;

	while (i < 3 && formTypes[i] != formName)
		i++;
	switch (i)
	{
	case 0:
		std::cout << "An intern with no name created a Robotomy Request Form" << std::endl;
		return (new RobotomyRequestForm(formTarget));
	case 1:
		std::cout << "An intern with no name created a Shrubbery Creation Form" << std::endl;
		return (new ShrubberyCreationForm(formTarget));
	case 2:
		std::cout << "An intern with no name created a Presidential Pardon Form" << std::endl;
		return (new PresidentialPardonForm(formTarget));
	default:
		std::cout << "An intern with no name tried to create " << formName << " but he doesnt seem to know" << std::endl;
		return (NULL);
	}
	
}
