/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:34:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/01 12:03:16 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

Point::Point(void): x(0), y(0)
{
	//std::cout << "Default constructor called" << std::endl;
}
Point::Point(Fixed &new_x, Fixed &new_y): x(new_x), y(new_y)
{
	//std::cout << "Fixed constructor called" << std::endl;
}

Point::Point(Point &toCopy)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Point::~Point(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(Point &toEqual)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	return (toEqual);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}