/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/07 18:20:41 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	pepito("pepito", 23);
	Bureaucrat	paquito("paquito", 198);
	Bureaucrat	pablito("pablito", 150);
	Bureaucrat	roberto("roberto", 40);
	Form		formularioSecreto("C4", 1, 1);
	Form		formularioNormalito("C7", 42, 42);
	Form		formularioRaro("C69", 242, 242);

	std::cout << pepito;
	std::cout << pablito;
	std::cout << formularioSecreto;
	std::cout << formularioNormalito;
	pablito.signForm(formularioNormalito);
	pepito.signForm(formularioNormalito);
	roberto.signForm(formularioNormalito);
	return (0);
}