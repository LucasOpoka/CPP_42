/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:40:52 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/25 20:51:18 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./btc <file>" << std::endl;
		return 1;
	}
	try
	{
		BitcoinExchange	ex;
		ex.exchange(av[1]);
	}
	catch (std::exception& e) {std::cerr << e.what() << std::endl;}
	return 0;
}
