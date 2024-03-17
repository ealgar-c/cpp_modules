/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:07:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/17 21:59:04 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <list>
# include <exception>

class Span{
	private:
		std::list<int> _nbrs;
		unsigned int	_N;
	public:
		//	constructor
			Span(const unsigned int);
			Span(const Span &);
		//	Equal operator overload
			Span &operator=(const Span &);
		//	destructor
			~Span(void);
		//	methods
			void	printnbrs(void) const;
			void	addNumber(const int);
			void	fillNumbers(void);
			unsigned int	shortestSpan(void) const;
			unsigned int	longestSpan(void) const;
		//	exceptions
			class OOBExcp: public std::exception{
				const char *what() const throw(){
					return ("[OOB EXCEPTION] OUT OF BOUNDS");
				}
			};
			class NEIExcp: public std::exception{
				const char *what() const throw(){
					return ("[NEI EXCEPTION] NOT ENOUGH ITEMS");
				}
			};
};
