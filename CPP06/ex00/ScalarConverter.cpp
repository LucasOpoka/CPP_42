/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:45:01 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/17 21:53:45 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

/* --------------- Constructors and destructor --------------- */

ScalarConverter::ScalarConverter() {};
ScalarConverter::ScalarConverter(const ScalarConverter& o) {(void)o;};
ScalarConverter &ScalarConverter::operator = (const ScalarConverter &o) {(void)o; return *this;};
ScalarConverter::~ScalarConverter() {};

/* --------------- Functions to check literal's type --------------- */

int ScalarConverter::IsChar(const std::string &s)
{
	if (s.length() == 1 && !std::isdigit(static_cast<unsigned char>(s[0])) && std::isprint(s[0]))
		return 1;
	return 0;
}

int ScalarConverter::IsInt(const std::string &s)
{
	size_t i = 0;

	if ((s[i] == '-' || s[i] == '+') && s.length() > 1)
		i++;
	for (;i < s.length(); i++)
		if (!std::isdigit(static_cast<unsigned char>(s[i])))
			return 0;
	return 2;
}

int ScalarConverter::IsDouble(const std::string &s)
{
	size_t i = 0;
	size_t dot = s.find('.');

	if (dot == std::string::npos || s.find('.', dot + 1) != std::string::npos)
		return 0;
	if ((s[i] == '-' || s[i] == '+') && s.length() > 2)
		i++;
	for (; i < s.length(); i++)
		if (!(std::isdigit(static_cast<unsigned char>(s[i])) || s[i] == '.'))
			return 0;
	if (!(s.length() == 1 && s[0] == '.'))
		return 3;
	return 0;
}

int ScalarConverter::IsFloat(const std::string &s)
{
	size_t len = s.length();

	if (len < 2)
		return 0;
	if (ScalarConverter::IsDouble(s.substr(0, len - 1)) && s[len - 1] == 'f')
		return 4;
	return 0;
}

int ScalarConverter::IsPseudoDouble(const std::string &s)
{
	if (s == "-inf" || s == "+inf" || s == "nan")
		return 5;
	return 0;
}

int ScalarConverter::IsPseudoFloat(const std::string &s)
{
	if (s == "-inff" || s == "+inff" || s == "nanf")
		return 6;
	return 0;
}


/* ---------------------- Overflow checker ------------------------ */

int ScalarConverter::IsOverflow(const double &d)
{
		if (d < nextafter(nextafter(-FLT_MAX, 0), -FLT_MAX) || nextafter(nextafter(FLT_MAX, 0), FLT_MAX) < d)
    		return 3;
		if (d < nextafter(nextafter(INT_MIN, 0), INT_MIN) || nextafter(nextafter(INT_MAX, 0), INT_MAX) < d)
    		return 2;
		if (d < nextafter(nextafter(CHAR_MIN, 0), CHAR_MIN) || nextafter(nextafter(CHAR_MAX, 0), CHAR_MAX) < d)
    		return 1;	
		return 0;
}


/* ---------------------- Char printer ------------------------ */

void ScalarConverter::printChar(const char &c, const int &overflow)
{
	std::cout << "char: ";
	if (!overflow)
	{
		if (std::isprint(static_cast<unsigned char>(c)))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Not Displayable" << std::endl;
	}
	else
		std::cout << "Impossible" << std::endl;
}


/* ---------- Functions to convert specific literal type ---------- */

void ScalarConverter::ConvertChar(const std::string &s)
{
	std::cout << "char: " << s[0] << std::endl;
	std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(s[0]) << ".0" << std::endl;
}


void ScalarConverter::ConvertInt(const std::string &s)
{
	int i = std::stoi(s);
	int overflow = ScalarConverter::IsOverflow(static_cast<double>(i));

	ScalarConverter::printChar(static_cast<char>(i), overflow);
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverter::ConvertDouble(const std::string &s)
{
	double d = std::stod(s);
	int overflow = ScalarConverter::IsOverflow(d);

	ScalarConverter::printChar(static_cast<char>(d), overflow);
	
	std::cout << "int: ";
	if (overflow < 2)
		std::cout << static_cast<int>(d) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	
	std::cout << std::fixed << std::setprecision(1);
	
	std::cout << "float: ";
	if (overflow < 3)
		std::cout << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::ConvertFloat(const std::string &s)
{
	float f = std::stof(s);
	int overflow = ScalarConverter::IsOverflow(static_cast<double>(f));

	ScalarConverter::printChar(static_cast<char>(f), overflow);
	
	std::cout << "int: ";
	if (overflow < 2)
		std::cout << static_cast<int>(f) << std::endl;
	else
		std::cout << "Impossible" << std::endl;
	
	std::cout << std::fixed << std::setprecision(1);
	
	std::cout << "float: " << f << "f" << std::endl;
	
	std::cout << "double: " << static_cast<double>(f) << std::endl;

}

void ScalarConverter::ConvertPseudoDouble(const std::string &s)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << s << "f" << std::endl;
	std::cout << "double: " << s << std::endl;
}

void ScalarConverter::ConvertPseudoFloat(const std::string &s)
{
	std::cout << "char: Impossible" << std::endl;
	std::cout << "int: Impossible" << std::endl;
	std::cout << "float: " << s << std::endl;
	std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
}
