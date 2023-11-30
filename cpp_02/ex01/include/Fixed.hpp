/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:08 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/30 15:21:39 by ealgar-c         ###   ########.fr       */
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
			Fixed();
			Fixed(const int);
			Fixed(const float);
			Fixed(const Fixed &);
			~Fixed(void);
			Fixed	&operator= (const Fixed &);
			int		getRawBits(void) const;
			void	setRawBits(int const);
			float	toFloat(void) const;
			int		toInt(void) const;
	};
	std::ostream&	operator<<(std::ostream &, const Fixed &);

#endif