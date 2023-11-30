/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:14 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/30 17:41:21 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// constructors 
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

// destructors
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// assignment operator overload
Fixed &Fixed::operator= (const Fixed &toEqual)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_value = toEqual.getRawBits();
	return (*this);
}

// comparison operators overload
bool	Fixed::operator> (const Fixed &y)
{
	return (this->fixed_value > y.fixed_value);
}

bool	Fixed::operator< (const Fixed &y)
{
	return (this->fixed_value < y.fixed_value);
}

bool	Fixed::operator>= (const Fixed &y)
{
	return (this->fixed_value >= y.fixed_value);
}

bool	Fixed::operator<= (const Fixed &y)
{
	return (this->fixed_value <= y.fixed_value);
}

bool	Fixed::operator== (const Fixed &y)
{
	return (this->fixed_value == y.fixed_value);
}

bool	Fixed::operator!= (const Fixed &y)
{
	return (this->fixed_value != y.fixed_value);
}

// arithmetic operators overload
Fixed	Fixed::operator+ (const Fixed &y)
{
	Fixed ret(this->toFloat() + y.toFloat());
	return (ret);
}

Fixed	Fixed::operator- (const Fixed &y)
{
	Fixed ret(this->toFloat() - y.toFloat());
	return (ret);
}

Fixed	Fixed::operator* (const Fixed &y)
{
	Fixed ret(this->toFloat() * y.toFloat());
	return (ret);
}

Fixed	Fixed::operator/ (const Fixed &y)
{
	Fixed ret(this->toFloat() / y.toFloat());
	return (ret);
}

// (pre/pos) increment and decrement operators overload
Fixed	&Fixed::operator++ ()
{
	this->fixed_value++;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{
	Fixed ret(*this);
	this->fixed_value++;
	return (ret);
}

Fixed	&Fixed::operator-- ()
{
	this->fixed_value--;
	return (*this);
}
Fixed	Fixed::operator-- (int)
{
	Fixed ret(*this);
	this->fixed_value--;
	return (ret);
}

// max overload
Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixed_value > b.fixed_value)
		return (a);
	return (b);
}

// min overload
Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixed_value < b.fixed_value)
		return (a);
	return (b);
}

// public funcs
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

// insertion operator overload
std::ostream&	operator<<(std::ostream &outstr, const Fixed &fx)
{
	outstr << fx.toFloat();
	return (outstr);
}
