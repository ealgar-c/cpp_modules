/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:31:05 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/01 12:17:53 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"
class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(void);
		Point(Fixed &, Fixed &);
		Point(Point &);
		~Point(void);
		Point	&operator=(Point &);
		Fixed	getX(void) const;	
		Fixed	getY(void) const;	
};

bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

#endif