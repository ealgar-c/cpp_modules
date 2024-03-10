/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 15:26:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/10 15:29:39 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	private:
		std::string	_name;
		int			age;
	public:
		//	Constructors
			Data();
			Data(Data &);
			Data(const std::string, const int);
		//	Destructor
			~Data();
		//	Equal assignment overload
			Data &operator=(const Data &);
		//	getters
			std::string	getName() const;
			int			getAge() const;
};

#endif