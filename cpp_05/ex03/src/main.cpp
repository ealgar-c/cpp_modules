/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/11 10:25:17 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/Intern.hpp"
#include "../include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	pepito("pepito", 23);
	Bureaucrat	paquito("paquito", 2);
	Bureaucrat	pablito("pablito", 130);
	Intern		becario;
	AForm	*formArbol = becario.makeForm("ShrubberyCreationForm", "pipo");
	AForm	*operacion = becario.makeForm("RobotomyRequestForm", "rufus");
	AForm	*perdon = becario.makeForm("PresidentialPardonForm", "marcos");

	std::srand(std::time(NULL));
	pepito.signForm(*formArbol);
	pablito.executeForm(*formArbol);
	pablito.signForm(*perdon);
	pepito.signForm(*perdon);
	paquito.executeForm(*perdon);
	pepito.executeForm(*operacion);
	paquito.signForm(*operacion);
	pepito.executeForm(*operacion);
	return (0);
}
