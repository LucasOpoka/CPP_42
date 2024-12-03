/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:54:19 by lopoka            #+#    #+#             */
/*   Updated: 2024/12/03 11:52:06 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <tuple>

class	BitcoinExchange
{
	private:
			std::map<std::string, float> _DB;
			void _loadDB();
	public:
			BitcoinExchange();
			BitcoinExchange(const BitcoinExchange& o);
			~BitcoinExchange();
			
			BitcoinExchange &operator = (const BitcoinExchange &o);
			
			void exchange(const char *toExchange);
			static std::tuple<std::string, std::string> lineSplit(std::string line, std::string delim);
			static void validDate(std::string &date);
			static float validValue(std::string &str_value, bool to_exchange);
			void printRates();
};
