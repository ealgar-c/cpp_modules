/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:34:44 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 19:53:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <ctime>
#include <cstdlib>

Base	*generate()
{
	int	rnd = std::rand();
	switch (rnd % 3)
	{
	case 0:
		std::cout << "created -> class of type A" << std::endl;
		return (new A());
		break ;
	case 1:
		std::cout << "created -> class of type B" << std::endl;
		return (new B());
		break ;
	case 2:
		std::cout << "created -> class of type C" << std::endl;
		return (new C());
		break ;
	default:
		std::cout << "something went wrong" << std::endl;
		return (NULL);
		break ;
	}
}

void	identify(Base *toIdent)
{
	if (dynamic_cast<A *>(toIdent))
		std::cout << "Class type A" << std::endl;
	else if (dynamic_cast<B *>(toIdent))
		std::cout << "Class type B" << std::endl;
	else
		std::cout << "Class type C" << std::endl;
}

void	identify(Base &toIdent)
{
	try
	{
		A	&tryA = dynamic_cast<A &>(toIdent);
		(void)tryA;
		std::cout << "Class type A" << std::endl;
	}
	catch(const std::exception& e){
	}
	try
	{
		B	&tryB = dynamic_cast<B &>(toIdent);
		(void)tryB;
		std::cout << "Class type B" << std::endl;
	}
	catch(const std::exception& e){
	}
	try
	{
		C	&tryC = dynamic_cast<C &>(toIdent);
		(void)tryC;
		std::cout << "Class type C" << std::endl;
	}
	catch(const std::exception& e){
	}
	
}

int main()
{
	Base *a;

	std::srand(std::time(NULL));
	for (int i = 0; i < 5; i++){
		a = generate();
		identify(a);
		identify(*a);
		delete a;
	}
	return (0);
}