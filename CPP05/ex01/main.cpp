/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:35:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/15 13:28:04 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"

int	main(void)
{	
	try {Form toolow("form_low", 10, 420);}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}
	
	try {Form toohigh("form_high", -42, 10);}
	catch(std::exception &e) {std::cout << e.what() << std::endl;}

	Bureaucrat a("a", 100);
	Bureaucrat b("b", 50);
	Form c("c", 75, 75);

	a.signForm(c);
	b.signForm(c);

	std::cout << c;

	return 0;
}
