/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:54:13 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/07 21:09:20 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::setw(34) << "memory address of string: " << &string << std::endl;
	std::cout << std::setw(34) << "memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(34) << "memory address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << std::setw(34) << "value pointed to by string: " << string << std::endl;
	std::cout << std::setw(34) << "value pointed to by stringPTR: " << *stringPTR <<std::endl;
	std::cout << std::setw(34) << "value pointed to by stringREF: " << stringREF <<std::endl;
	return 0;
}
