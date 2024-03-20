/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:28:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/20 14:38:57 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputFile)
{
	std::ifstream dbStream;
	std::ifstream fileStream;

	dbStream.open(database);
	fileStream.open(inputFile);
	if (dbStream.fail())
	{
		std::cerr << "file " << database << " not found" << std::endl;
		exit(EXIT_FAILURE);
	}
	else if (fileStream.fail())
	{
		std::cerr << "file " << inputFile << " not found" << std::endl;
		exit(EXIT_FAILURE);
	}
	this->extractFile(fileStream);
	this->extractDb(dbStream);
}

static std::string	saveDbEntry(std::string &strToCheck, BitcoinExchange &btcEx)
{
	int j = strToCheck.find(",", 0);
	std::string dateStr = strToCheck.substr(0, j - 1);
	double		numDbValue = atof((strToCheck.substr(j + 1, strToCheck.length() - j + 1)).c_str());
	btcEx.setDbNode(dateStr, numDbValue);
}

void	BitcoinExchange::extractDb(std::ifstream &dbStream)
{
	std::string	str;

	while (dbStream.good())
	{
		std::getline(dbStream, str);
		saveDbEntry(str, *this);
	}
}

void	BitcoinExchange::setDbNode(const std::string &dateStr, const double &numDbValue)
{
	this->_db.insert({dateStr, numDbValue});
}
