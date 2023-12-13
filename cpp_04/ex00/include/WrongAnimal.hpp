/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:57:47 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/12/13 12:57:57 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
	// constructors
		WrongAnimal();
		WrongAnimal(WrongAnimal &);
	// destructor
		virtual ~WrongAnimal();
	// equal overload
		WrongAnimal &operator=(WrongAnimal &);
	// getter
		std::string		getType(void) const;
	// methods
		void			makeSound(void) const;
};

#endif