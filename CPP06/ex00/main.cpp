/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:54:23 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/17 21:53:11 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert <value>" << std::endl;
		return 1;
	}
	try
	{	
		if (ScalarConverter::IsChar(av[1]))
			ScalarConverter::ConvertChar(av[1]);
		else if (ScalarConverter::IsInt(av[1]))
			ScalarConverter::ConvertInt(av[1]);
		else if (ScalarConverter::IsDouble(av[1]))
			ScalarConverter::ConvertDouble(av[1]);
		else if (ScalarConverter::IsFloat(av[1]))
			ScalarConverter::ConvertFloat(av[1]);
		else if (ScalarConverter::IsPseudoDouble(av[1]))
			ScalarConverter::ConvertPseudoDouble(av[1]);
		else if (ScalarConverter::IsPseudoFloat(av[1]))
			ScalarConverter::ConvertPseudoFloat(av[1]);
		else
			std::cout << "Invalid input" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
