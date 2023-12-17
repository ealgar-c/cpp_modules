/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:36:39 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/15 15:08:26 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Interfaces.hpp"

void leaksCheck(void)
{
	system("leaks -q materia");
}
/* 
int main(void)
{
	atexit(leaksCheck);
	Ice ice;
	Cure cure;
	Character c1("paco");
	Character c2("pepe");
	c1.equip(&cure);
	c2.equip(&ice);
	c1.equip(&ice);
	c1.use(0, c2);
	c1.use(1, c2);
	c1.unequip(0);
	c1.use(0, c2);
	c1.equip(&cure);
	c1.use(1, c2);
	c1.use(0, c2);
	c2.use(0, c1);
	c2.unequip(0);
	c1.use(1, c2);
	c2.use(0, c1);
	std::cout << "-----DEEP COPY TEST-----" << std::endl;
	Character c3;
	c3 = c2;
	c3.use(0, c2);
	c3.equip(&ice);
	c3.use(0, c2);
	c2.use(0, c3);
	
	
	return (0);
}
 */
int main(void)
{
	atexit(leaksCheck);
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "test" << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (0);
}
