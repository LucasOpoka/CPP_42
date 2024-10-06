/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:31:27 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/05 19:00:38 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook		phbk = PhoneBook();
	std::string		cmnd;

	while (!std::cin.eof())
	{
		cmnd = get_input("Enter command:");
		if (!cmnd.compare("EXIT"))
			break;
		if (!cmnd.compare("ADD"))
			phbk.add();
		if (!cmnd.compare("SEARCH"))
			phbk.search();
	}
	return 0;
}
