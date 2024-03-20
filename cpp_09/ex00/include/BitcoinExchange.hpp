/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:03:48 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/20 14:24:04 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <exception>

class BitcoinExchange
{
	private:
		std::map<std::string, double>	_db;
		std::map<std::string, double>	_inputFile;
	public:
		BitcoinExchange(const std::string &, const std::string &);
		BitcoinExchange(const BitcoinExchange &);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &);
		void	extractFile(std::ifstream &);
		void	extractDb(std::ifstream &);
		void	setDbNode(const std::string &, const double &);
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
};
