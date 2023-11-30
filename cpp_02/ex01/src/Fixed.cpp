/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:14 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/30 15:50:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(): fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value): fixed_value(int_value << this->fract_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float ft_value): fixed_value(std::roundf(ft_value * (1 << this->fract_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed &Fixed::operator= (const Fixed &toEqual)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_value = toEqual.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->fixed_value >> this->fract_bits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_value) / (1 << this->fract_bits));
}

std::ostream&	operator<<(std::ostream &outstr, const Fixed &fx)
{
	outstr << fx.toFloat();
	return (outstr);
}
