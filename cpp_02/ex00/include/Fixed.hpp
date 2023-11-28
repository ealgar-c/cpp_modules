/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:59:08 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/28 16:59:50 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

	class Fixed{
		
		private:
			int	fixed_value;
			static const int	nb_frac = 8;
		public:
			Fixed(void);
			Fixed(Fixed &fixed);
			~Fixed();
	};

#endif