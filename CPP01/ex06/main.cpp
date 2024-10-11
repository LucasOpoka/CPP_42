/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:13:11 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/11 14:52:47 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			cs = -1;
	
	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter [level]" << std::endl;
		return 1;
	}
	for (int i = 0; i < 4; i++)
		if (av[1] == levels[i]) {cs = i;}
	switch (cs != -1)
	{
		case 0:
			std::cout << "Invalid level, choose from:" << std::endl;
			std::cout << "DEBUG, INFO, WARNING, ERROR" << std::endl;
			return 1;
		case 1:
			for (; cs < 4; cs++)
				harl.complain(levels[cs]);
			return 0;
	}
}
