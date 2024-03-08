/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/09 00:26:06 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	pepito("pepito", 23);
	Bureaucrat	paquito("paquito", 2);
	Bureaucrat	pablito("pablito", 130);
	ShrubberyCreationForm	formArbol("pipo");
	RobotomyRequestForm		operacion("rufus");
	PresidentialPardonForm	perdon("marcos");

	pepito.signForm(formArbol);
	pablito.executeForm(formArbol);
	pablito.signForm(perdon);
	pepito.signForm(perdon);
	paquito.executeForm(perdon);
	pepito.executeForm(operacion);
	paquito.signForm(operacion);
	pepito.executeForm(operacion);
	return (0);
}
