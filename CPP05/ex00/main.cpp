/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:35:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 20:53:57 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a;
	Bureaucrat b("b", 150);
	Bureaucrat c("c", 1);
	
	try {Bureaucrat	toolow("low", 420);}
	catch (std::exception &e) {std::cout << e.what() << std::endl << std::endl;}
	
	try {Bureaucrat	toohigh("high", -42);}
	catch(std::exception &e) {std::cout << e.what() << std::endl << std::endl;}
	
	try {c.incrGrade();}
	catch(const std::exception& e) {std::cout << e.what() << std::endl << std::endl;}
	
	try {b.decrGrade();}
	catch(const std::exception& e) {std::cout << e.what() << std::endl << std::endl;}

	return 0;
}
