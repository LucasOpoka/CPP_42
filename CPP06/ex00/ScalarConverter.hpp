/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:19:30 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/18 22:46:15 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <limits.h>
#include <cmath>
#include <cfloat>

class ScalarConverter
{
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter &original);
			~ScalarConverter();

			ScalarConverter	&operator = (const ScalarConverter &original);
	public:
			static int IsChar(const std::string &s);
			static int IsInt(const std::string &s);
			static int IsDouble(const std::string &s);
			static int IsFloat(const std::string &s);
			static int IsPseudoDouble(const std::string &s);
			static int IsPseudoFloat(const std::string &s);

			static void ConvertChar(const std::string &s);
			static void ConvertInt(const std::string &s);
			static void ConvertDouble(const std::string &s);
			static void ConvertFloat(const std::string &s);
			static void ConvertPseudoDouble(const std::string &s);
			static void ConvertPseudoFloat(const std::string &s);
			
			static int IsOverflow(const double &d);
			static void printChar(const char &c, const int &overflow);

			static void convert(const std::string &s);
};
