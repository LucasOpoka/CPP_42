/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:35:37 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/09 20:23:53 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "I love extra bacon on my burger!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs money." << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve extra bacon for free." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "I want to speak to the manager now!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
		level == levels[i] ? (this->*functions[i])() : void();
}
