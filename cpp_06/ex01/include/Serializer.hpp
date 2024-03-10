/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:11:37 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 15:15:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdint>

class Serializer
{
	private:
		//	constructors
			Serializer(void);
			Serializer(const Serializer &);
		// equal operator assignment
		Serializer &operator=(const Serializer &);
	public:
		//	destructor
			~Serializer();
		//	methods
			static uintptr_t	serialize(Data *ptr);
			static Data			deserialize(uintptr_t raw);			
};

#endif