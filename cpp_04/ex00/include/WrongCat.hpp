/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:39:27 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:58:01 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP


# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
	// constructors
		WrongCat();
		WrongCat(WrongCat &);
	// destructor
		virtual ~WrongCat();
	// equal overload
		WrongCat	&operator=(WrongCat &);
	// methods
		void		makeSound(void) const;
};

#endif