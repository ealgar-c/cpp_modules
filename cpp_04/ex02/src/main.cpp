/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:15:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 14:14:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

void	leakCheck(void)
{
	system("leaks -q abstract");
}

/* int main(void)
{
	// non-instantiable class checker
	Animal test;
	test.makeSound();
	return (0);
} */

int main(void)
{
	// subject tester
	atexit(leakCheck);
	Animal *herd[10] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};
	for (int i = 0; i < 10; i++)
		delete herd[i];
	return (0);
}