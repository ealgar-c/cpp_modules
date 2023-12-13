/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:15:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 13:53:21 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

void	leakCheck(void)
{
	system("leaks -q Polymorph");
	
}

int	main(void)
{
	atexit(leakCheck);
	const Animal *meta = new Animal();
	const Animal *pancho = new Dog();
	const Animal *misifu = new Cat();
	std::cout << "Meta is a " << meta->getType() << " and it says ";
	meta->makeSound();
	std::cout << "Pancho is a " << pancho->getType() << " and it says ";
	pancho->makeSound();
	std::cout << "Misifu is a " << misifu->getType() << " and it says ";
	misifu->makeSound();
	delete(meta);
	delete(pancho);
	delete(misifu);
	const WrongAnimal *cosa = new WrongCat();
	std::cout << "cosa is a " << cosa->getType() << " and it says ";
	cosa->makeSound();
	delete(cosa);
	return (0);
}
