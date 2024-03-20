/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:28:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/03/20 21:01:48 by ealgar-c         ###   ########.fr       */
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
	this->extractFiles(fileStream, dbStream);
}

static void	saveDbEntry(std::string &strToCheck, BitcoinExchange &btcEx)
{
	int j = strToCheck.find(",", 0);
	std::string dateStr = strToCheck.substr(0, j);
	double		numValue = atof((strToCheck.substr(j + 1, strToCheck.length() - j + 1)).c_str());
	btcEx.setDbNode(dateStr, numValue);
}

static	bool	dateChecker(const std::string str)
{
	int	yr;
	int	mn;
	int	day;
	int	i;
	int	j;

/* 	if (i = str.find("-", 0) != -1)
	{
		yr = atoi(str.substr(0, i - 1).c_str());
		if (yr < 2019)
			throw(BitcoinExchange::BDIExcpt());
		j = i;
		if (i = str.find("-", i) != -1)
		{
			mn = atoi(str.substr(j, i - j).c_str());
			if (mn <= 0 || mn > 12)
				throw(BitcoinExchange::BDIExcpt());
			j = i + 1;
			day = atoi((str.substr(j, str.length() - j)).c_str());
			if (day <= 0 && day > 31)
				throw(BitcoinExchange::BDIExcpt());
		}
	} */
	i = str.find("-", 0);
	if (i != -1)
	{
		yr = atoi(str.substr(0, i).c_str());
		std::cout << str.substr(0, i) << std::endl;
		if (yr < 2009)
			std::cerr << "test" << std::endl;
		j = i + 1;
		i = str.find("-", j);
		if (i != -1)
		{
			mn = atoi(str.substr(j, i - j).c_str());
			std::cout << str.substr(j, i - j) << std::endl;
			if (mn <= 0 || mn > 12)
				std::cerr << "test" << std::endl;
			j = i + 1;
			day = atoi((str.substr(j, str.length() - j)).c_str());
			std::cout << str.substr(j, str.npos()) << std::endl;
			if (day <= 0 || day > 31)
				std::cerr << "test" << std::endl;
		}
	}
	return true;
}

static void	saveFileEntry(std::string &strToCheck, BitcoinExchange &btcEx)
{
	double		numValue;
	std::string dateStr;
	std::string valueStr;
	int			j;

	(void)btcEx;
	try
	{
		j = strToCheck.find(" | ", 0);
		if (j != -1)
		{
			dateStr = strToCheck.substr(0, j - 1);
			valueStr = strToCheck.substr(j + 1, strToCheck.length() - j + 1);
			numValue = atof(valueStr.c_str());
			if (!dateChecker(dateStr))
				throw(BitcoinExchange::BDIExcpt());
			if (numValue >= 1000 || (numValue == 0.0 && (valueStr != "0.0" || valueStr != "0")))
				throw(BitcoinExchange::VORExcpt());
			if (numValue < 0.0)
				throw(BitcoinExchange::NEVExcpt());
			//btcEx.setFileNode(dateStr, numValue)
		}
		else
			throw(BitcoinExchange::BDIExcpt());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}


void	BitcoinExchange::extractFiles(std::ifstream &fileStream, std::ifstream &dbStream)
{
	std::string	str;

	while (dbStream.good())
	{
		std::getline(dbStream, str);
		saveDbEntry(str, *this);
	}
	while (fileStream.good())
	{
		std::getline(fileStream, str);
		saveFileEntry(str, *this);
	}
}

void	BitcoinExchange::setDbNode(const std::string &dateStr, const double &numDbValue)
{
	this->_db.insert(std::pair<std::string, double>(dateStr, numDbValue));
}

BitcoinExchange::~BitcoinExchange(){}