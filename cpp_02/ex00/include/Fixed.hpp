/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:08 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/29 15:21:27 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

	class Fixed{
		
		private:
			int					fixed_value;
			static const int	nb_frac = 8;
		public:
			Fixed(void);
			Fixed(Fixed &);
			~Fixed(void);
			Fixed &operator= (const Fixed &);
			int		getRawBits(void) const;
			void	setRawBits(int const);
	};

#endif