/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:37:42 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/06 20:51:27 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->count = 0;
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
	Contact c(first_name, last_name, nickname, phonenumber, secret);
	this->book[this->index] = c;
	this->index = (this->index + 1) % 8;
	this->count += (this->count < 8 ? 1 : 0);
}

void	PhoneBook::search()
{
	std::string ix;

	if (!this->count)
		return;
	for (int i = 0; i < this->count; i++)
		this->book[i].print_short(i);
	ix = get_input("Enter index from 0 to 7 for full info");
	if (ix.length() != 1 || ix.at(0) < '0' || ix.at(0) > '7' || ix.at(0) - '0' >= this->count)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	this->book[ix.at(0) - '0'].print_long();
}
