/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:37:42 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 15:54:53 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	_count = 0;
}

std::string get_input(std::string prompt)
{
	std::string input = "";
	
	if (std::cin.eof())
		return input;
	std::cout << prompt << std::endl;
	std::getline(std::cin, input);
	return input;
}

void PhoneBook::add()
{
	std::string first_name = get_input("First name:");
	std::string last_name = get_input("Last name:");
	std::string nickname = get_input("Nickname:");
	std::string phonenumber = get_input("Phone number:");
	std::string secret = get_input("Darkest secret:");
	
	if (first_name.empty() || last_name.empty() || nickname.empty()
		|| phonenumber.empty() || secret.empty())
	{	
		std::cout << "No field can be empty" << std::endl;
		return;
	}
	Contact c(_index + 1, first_name, last_name, nickname, phonenumber, secret);
	_book[_index] = c;
	_index = (_index + 1) % 8;
	_count += (_count < 8 ? 1 : 0);
}

void	PhoneBook::search()
{
	std::string ix;

	if (!_count)
		return;
	for (int i = 0; i < _count; i++)
		_book[i].print_short();
	ix = get_input("Enter index from 1 to 8 for full info:");
	if (ix.length() != 1 || ix.at(0) < '1' || ix.at(0) > '8' || ix.at(0) - '1' >= _count)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	_book[ix.at(0) - '1'].print_long();
}
