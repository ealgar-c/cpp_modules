/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:18:26 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/01 12:25:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

static Fixed	getArea(const Point &x, const Point &y, const Point &z)
{
	return((x.getX() * (y.getY() - z.getY()) + y.getX() * (z.getY() - x.getY()) + z.getX() * (x.getY() - y.getY())) / 2.0f);
}

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed	TotalArea;
	Fixed	AreaABP;
	Fixed	AreaACP;
	Fixed	AreaBCP;

	if ((TotalArea = getArea(a, b, c)) < 0.f)
		TotalArea = TotalArea * -1;
	if ((AreaABP = getArea(a, b, point)) < 0.f)
		AreaABP = AreaABP * -1;
	if ((AreaACP = getArea(a, c, point)) < 0.f)
		AreaACP = AreaACP * -1;
	if ((AreaBCP = getArea(b, c, point)) < 0.f)
		AreaBCP = AreaBCP * -1;
	if (((AreaABP + AreaACP + AreaBCP) == TotalArea) && TotalArea != 0 && AreaABP != 0 && AreaACP != 0 && AreaBCP != 0)
		return (true);
	return (false);
}
