/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:02:58 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/11/28 11:05:32 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

	class Harl
	{
		private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
		public:
			Harl();
			~Harl();
			void	complain(std::string level);
	};
	

#endif