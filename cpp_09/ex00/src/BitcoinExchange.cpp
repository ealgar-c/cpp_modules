/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:28:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2024/04/01 11:24:37 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){std::cout << "Haz feliz a una yolanthe" << std::endl;}

BitcoinExchange::BitcoinExchange(const std::string &database, const std::string &inputFile)
{
	std::ifstream dbStream;
	std::ifstream fileStream;

	dbStream.open(database.c_str());
	fileStream.open(inputFile.c_str());
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

BitcoinExchange::BitcoinExchange(const BitcoinExchange &toCopy)
{
	this->_db = toCopy._db;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &toEqual)
{
	if (this != &toEqual)
		this->_db = toEqual._db;
	return (*this);
}

static void	saveDbEntry(std::string &strToCheck, BitcoinExchange &btcEx)
{
	int j = strToCheck.find(",", 0);
	std::string dateStr = strToCheck.substr(0, j);
	double		numValue = atof((strToCheck.substr(j + 1, strToCheck.length() - j + 1)).c_str());
	btcEx.setDbNode(dateStr, numValue);
}

static bool	checkDay(int month, int day, int year)
{
	if (day <= 0)
		return false;
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day > 31)
				return false;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > 30)
				return false;
			break ;
		case 2:
			if (year % 400 == 0 || (year % 4 == 0 && (year % 100 != 0)))
			{
				if (day > 29)
					return false;
			}
			else
			{
				if (day > 28)
					return false;
			}
			break ;
		default:
			return false;
			break ;
	}
	return true;
}

static	void	dateChecker(std::string str)
{
	int	yr;
	int	mn;
	int	day;
	int	i;

	i = str.find("-", 0);
	if (i != -1)
	{
		yr = atoi(str.substr(0, i).c_str());
		if (yr < 2009)
			throw(BitcoinExchange::BDIExcpt());
		str.erase(0, i + 1);
		i = str.find("-", 0);
		if (i != -1)
		{
			mn = atoi(str.substr(0, i).c_str());
			if (mn <= 0 || mn > 12)
				throw(BitcoinExchange::BDIExcpt());
			str.erase(0, i + 1);
			day = atoi(str.c_str());
			if (!checkDay(mn, day, yr))
				throw(BitcoinExchange::BDIExcpt());
		}
	}
}

static void	saveFileEntry(std::string &strToCheck, BitcoinExchange &btcEx)
{
	double		numValue;
	std::string dateStr;
	std::string valueStr;
	int			j;

	(void)btcEx;
	if (strToCheck == "date | value")
		return ;
	try
	{
		j = strToCheck.find(" | ", 0);
		if (j != -1)
		{
			dateStr = strToCheck.substr(0, j);
			valueStr = strToCheck.substr(j + 3);
			numValue = atof(valueStr.c_str());
			dateChecker(dateStr);
			if (numValue >= 1000 || (numValue == 0.0 && (valueStr != "0.0" || valueStr != "0")))
			{
				throw(BitcoinExchange::VORExcpt());
			}
			if (numValue < 0.0)
				throw(BitcoinExchange::NEVExcpt());
			btcEx.getValueFromDb(dateStr, numValue);
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

static void	printValue(std::string str, const double value, std::map<std::string, double>::iterator dbnode)
{
	std::cout << str << " ==> " << value;
	std::cout << " = " << value * dbnode->second << std::endl;
}

void	BitcoinExchange::getValueFromDb(const std::string &dateStr, const double &val)
{
	std::map<std::string, double>::iterator it = this->_db.begin();
	try
	{
		if (dateStr < it->first)
			throw (BitcoinExchange::DNFExcpt());
		it = this->_db.lower_bound(dateStr);
		if (it != _db.begin())
		{
			if (it->first != dateStr)
				it--;
			printValue(dateStr, val, it);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}
}

BitcoinExchange::~BitcoinExchange(){}