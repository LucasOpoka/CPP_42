/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:03:33 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/06 20:44:21 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

Contact::Contact()
{}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
				 std::string phone_number, std::string secret)
{
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

void Contact::print_short(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << trim(this->_first_name) << "|";
	std::cout << std::setw(10) << trim(this->_last_name) << "|";
	std::cout << std::setw(10) << trim(this->_nickname) << std::endl;
}

void Contact::print_long()
{
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phonenumber: " << this->_phone_number << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}
