/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:03:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 15:48:05 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

Contact::Contact()
{}

Contact::Contact(int index, std::string first_name, std::string last_name,
			std::string nickname, std::string phone_number, std::string secret)
{
	_index = index;
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_phone_number = phone_number;
	_secret = secret;
}

std::string trim(std::string s)
{
	return (s.length() > 10 ? s.substr(0, 9) + "." : s);
}

void Contact::print_short()
{
	std::cout << std::setw(10) << _index << "|";
	std::cout << std::setw(10) << trim(_first_name) << "|";
	std::cout << std::setw(10) << trim(_last_name) << "|";
	std::cout << std::setw(10) << trim(_nickname) << std::endl;
}

void Contact::print_long()
{
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phonenumber: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}
