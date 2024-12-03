/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:09:45 by lopoka            #+#    #+#             */
/*   Updated: 2024/12/03 11:54:46 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {_loadDB();}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &o): _DB(o._DB) {} 

BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &original)
{
	if (this != &original)
	{
		this->~BitcoinExchange();
		new(this) BitcoinExchange(original);
	}
	return *this;
}

float BitcoinExchange::validValue(std::string &str_value, bool to_exchange)
{
	float res;

	res = std::stof(str_value);
	if (to_exchange && (res < 0 || 1000 < res))
		throw(std::runtime_error("Inavalid value: " + str_value + ". Must be in range 0 to 1000." ));
	return res;
}

void BitcoinExchange::validDate(std::string &dateString)
{
	std::stringstream dateStream(dateString);
	char separator;
	struct tm date, newDate;

	dateStream >> date.tm_year >> separator >> date.tm_mon >> separator >> date.tm_mday;
	date.tm_year -= 1900;
	date.tm_mon -= 1;
	date.tm_hour = 1;
	date.tm_min = 0;
	date.tm_sec = 0;

    newDate = date;
    mktime(&newDate);
	if (date.tm_year != newDate.tm_year || date.tm_mon != newDate.tm_mon || date.tm_mday != newDate.tm_mday)
		throw(std::runtime_error("Invalid date: " + dateString));
}

void BitcoinExchange::printRates()
{
	for (std::map<std::string, float>::const_iterator itr = _DB.begin(); itr != _DB.end(); itr++)
    	std::cout << itr->first << " " << itr->second << std::endl;
}

void BitcoinExchange::_loadDB()
{
	std::string line, date, str_rate;
	float rate;

    std::ifstream inputFile("./data.csv");
    if (!inputFile.is_open())
		throw(std::runtime_error("Couldn't load rates file"));
	if (!std::getline(inputFile, line) || line != "date,exchange_rate")
		throw(std::runtime_error("Inavalid rates file"));
	while (std::getline(inputFile, line))
	{
		try
		{
			tie(date, str_rate) = BitcoinExchange::lineSplit(line, ","); 
			BitcoinExchange::validDate(date);
			rate = BitcoinExchange::validValue(str_rate, false);
			
			_DB.insert(std::make_pair(date, rate));
		}
		catch (std::exception& e) {std::cerr << "Error in rates file: " << e.what() << std::endl;}
	}
}

void BitcoinExchange::exchange(const char *toExchange)
{
	std::string line, date, closest_date, str_quantity;
	float quantity;
	std::map<std::string, float>::iterator itr;

    std::ifstream inputFile(toExchange);
    if (!inputFile.is_open())
		throw(std::runtime_error("Couldn't load exchange file"));
	if (!std::getline(inputFile, line) || line != "date | value")
		throw(std::runtime_error("Inavalid exchange file"));

	while (std::getline(inputFile, line))
	{
		try
		{
			tie(date, str_quantity) = BitcoinExchange::lineSplit(line, " | "); 
			BitcoinExchange::validDate(date);
			quantity = BitcoinExchange::validValue(str_quantity, true);
			
			if (_DB.find(date) == _DB.end())
			{
				itr = _DB.lower_bound(date);
				closest_date = (itr == _DB.begin()) ? itr->first : std::prev(itr)->first;
			}
			else
				closest_date = date;

			std::cout << date << " => " << quantity << " = " << quantity * _DB[closest_date] << std::endl;
		}
		catch (std::exception& e) {std::cerr << "Error in exchange file: " << e.what() << std::endl;}
	}
}

std::tuple<std::string, std::string> BitcoinExchange::lineSplit(std::string line, std::string delimiter)
{
	std::string left, right;
	size_t delim_pos;

	if (!line.empty())
		delim_pos = line.find(delimiter);
	if (line.empty() || delim_pos == std::string::npos)
		throw(std::runtime_error("Inavalid line: \"" + line + "\""));
	left = line.substr(0, delim_pos);
	delim_pos += delimiter.length();
	right = line.substr(delim_pos, line.length() - delim_pos);
	if (left.empty() && right.empty())
		throw(std::runtime_error("lineSplit: empty left and right"));
	else if (left.empty())
		throw(std::runtime_error("lineSplit: empty left"));
	else if (right.empty())
		throw(std::runtime_error("lineSplit: empty right"));
	return std::make_tuple(left, right);
}
