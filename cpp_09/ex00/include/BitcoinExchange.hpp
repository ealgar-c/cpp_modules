/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:03:48 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:24:10 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <exception>
# include <cstdlib>


class BitcoinExchange
{
	private:
		std::map<std::string, double>	_db;
	public:
	BitcoinExchange();
		BitcoinExchange(const std::string &, const std::string &);
		BitcoinExchange(const BitcoinExchange &);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &);
		void	extractFiles(std::ifstream &, std::ifstream &);
		void	setDbNode(const std::string &, const double &);
		void	getValueFromDb(const std::string &, const double &);
		class	EOFExcpt: public std::exception{
			const char *what() const throw(){
				return ("[EOF EXCEPTION] Error opening file");
			};
		};
		class	BDIExcpt: public std::exception{
			const char *what() const throw(){
				return ("[BDI EXCEPTION] Bad date input");
			};
		};
		class	VORExcpt: public std::exception{
			const char *what() const throw(){
				return ("[VOR EXCEPTION] Value out of range");
			};
		};
		class	NEVExcpt: public std::exception{
			const char *what() const throw(){
				return ("[NEV EXCEPTION] Negative value not allowed");
			};
		};
		class	DNFExcpt: public std::exception{
			const char *what() const throw(){
				return ("[DNF EXCEPTION] Data not found");
			};
		};
};
