/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:24:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/30 17:59:17 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

/* int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
} */

int main()
{
	Fixed a(10);
	Fixed b(20);
	Fixed c;
	c = a + b;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "a + c: " << a + c << std::endl;
	std::cout << "b - a: " << b - a << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "b / a: " << b / a << std::endl;
	if (b > a)
		std::cout << "b is bigger than a" << std::endl;
	else if (b < a)
		std::cout << "a is bigger than a" << std::endl;
	Fixed d(a);
	if (a == d)
		std::cout << "a and d are the same" << std::endl;
	if (a != c)
		std::cout << "a and c are different" << std::endl;
	std::cout << "the max between b and c is: " << Fixed::max(b, c) << std::endl;
	std::cout << "the min between c and b is: " << Fixed::min(c, b) << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	return (0);	
	
}