/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:08 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/30 17:38:40 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

	class Fixed{
		
		private:
			int					fixed_value;
			static const int	fract_bits = 8;
		public:
			// constructors
			Fixed();
			Fixed(const int);
			Fixed(const float);
			Fixed(const Fixed &);

			// destructor
			~Fixed(void);

			// assignment operator overload
			Fixed	&operator= (const Fixed &);

			// comparison operators overload
			bool	operator> (const Fixed &);
			bool	operator< (const Fixed &);
			bool	operator>= (const Fixed &);
			bool	operator<= (const Fixed &);
			bool	operator== (const Fixed &);
			bool	operator!= (const Fixed &);

			// arithmetic operators overload
			Fixed	operator+ (const Fixed &);
			Fixed	operator- (const Fixed &);
			Fixed	operator* (const Fixed &);
			Fixed	operator/ (const Fixed &);

			// (pre/pos) increment and decrement operators overload
			Fixed	&operator++ ();
			Fixed	operator++ (int);
			Fixed	&operator-- ();
			Fixed	operator-- (int);

			// max overload
			static Fixed		&max(Fixed &, Fixed &);
			static const Fixed	&max(const Fixed &, const Fixed &);

			// min overload
			static Fixed		&min(Fixed &, Fixed &);
			static const Fixed	&min(const Fixed &, const Fixed &);

			// public funcs
			int		getRawBits(void) const;
			void	setRawBits(const int);
			float	toFloat(void) const;
			int		toInt(void) const;
	};

	// insertion operator overload
	std::ostream&	operator<<(std::ostream &, const Fixed &);

#endif