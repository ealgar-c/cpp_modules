/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:15:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/14 13:39:12 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

void	leakCheck(void)
{
	system("leaks -q ideas");
}

/* int	main(void)
{
	// Dog deep copy & idea managmnt tester
	atexit(leakCheck);
	const Dog *pancho = new Dog();
	Dog rigoberto;
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	pancho->thinkSomething("i am hungry");	
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	pancho->thinkSomething("i am thirsty");	
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	rigoberto = *pancho;
	std::cout << "rigoberto:" << std::endl;
	rigoberto.shareThoughts();
	rigoberto.thinkSomething("i am tired");	
	std::cout << "rigoberto:" << std::endl;
	rigoberto.shareThoughts();
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	delete (pancho);
	
	return (0);
} */

/* int	main(void)
{
	// Cat deep copy & idea managmnt tester
	atexit(leakCheck);
	const Cat *pancho = new Cat();
	Cat rigoberto;
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	pancho->thinkSomething("i am hungry");	
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	pancho->thinkSomething("i am thirsty");	
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	rigoberto = *pancho;
	std::cout << "rigoberto:" << std::endl;
	rigoberto.shareThoughts();
	rigoberto.thinkSomething("i am tired");	
	std::cout << "rigoberto:" << std::endl;
	rigoberto.shareThoughts();
	std::cout << "pancho:" << std::endl;
	pancho->shareThoughts();
	delete (pancho);
	
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