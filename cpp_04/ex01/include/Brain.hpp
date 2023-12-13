/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:23:08 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 15:16:04 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		int	_ideasNbr;
		std::string _ideas[100];
	public:
	// constructors
		Brain();
		Brain(const Brain &);
	// destructor
		~Brain();
	// equal overload
		Brain &operator=(const Brain &);
	// getter
		std::string	getIdea(const int) const;
	// setter
		void setIdea(std::string);
};

#endif