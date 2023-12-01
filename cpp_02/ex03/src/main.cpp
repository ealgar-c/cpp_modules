/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:24:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/01 12:25:49 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int main(void)
{
	Fixed ax(1.05f);
	Fixed ay(1.96f);
	Point A(ax, ay);
	Fixed bx(7.5f);
	Fixed by(10.25f);
	Point B(bx, by);
	Fixed cx(9.91f);
	Fixed cy(7.15f);
	Point C(cx, cy);
	Fixed vx(5.2f);
	Fixed vy(5.35f);
	Point V(vx, vy);
	Fixed nvx(8.95f);
	Fixed nvy(2.22f);
	Point NV(nvx, nvy);

	if (bsp(A, B, C, V))
		std::cout << "V es un punto valido dentro del triangulo" << std::endl;
	else
		std::cout << "V no es un punto valido dentro del triangulo" << std::endl;
	if (bsp(A, B, C, NV))
		std::cout << "NV es un punto valido dentro del triangulo" << std::endl;
	else
		std::cout << "NV no es un punto valido dentro del triangulo" << std::endl;
	return (0);
}
