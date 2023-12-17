/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:11:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/17 19:39:23 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	pepito("pepito", 23);
	Bureaucrat	paquito("paquito", 198);
	Bureaucrat pablito("pablito", 1);
	std::cout << paquito;
	std::cout << pepito;
	pepito.decrementGrade();
	std::cout << pepito;
	pepito.incrementGrade();
	std::cout << pepito;
	paquito.decrementGrade();
	std::cout << paquito;
	pablito.incrementGrade();
	std::cout << pablito;
	return (0);
}