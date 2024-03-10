/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:44:26 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 13:48:01 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <stdlib.h>
# include <string>
# include <limits.h>

enum e_convTypes{
	CHAR = 1,
	INT,
	FLT,
	DBL,
	PSEF,
	PSED	
};

class ScalarConverter
{
	private:
		//	Constructors
			ScalarConverter();
			ScalarConverter(ScalarConverter &);
		//	Equal operator assignment
			ScalarConverter &operator=(const ScalarConverter &);
	public:
		//	Desctructor
			~ScalarConverter();
		//	methods
			static void	convert(const std::string);
};

#endif