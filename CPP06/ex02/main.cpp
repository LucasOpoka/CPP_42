/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:05:44 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 16:31:01 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base *random = generate();
	Base *a = new A();
	Base *b = new B();
	Base *c = new C();

	std::cout << "Identify pointers:" << std::endl;
	identify(random);	
	identify(a);	
	identify(b);
	identify(c);

	delete random;
	delete a;
	delete b;
	delete c;

	std::cout << "Identify references:" << std::endl;
	A a_type;
	B b_type;
	C c_type;
	identify(a_type);	
	identify(b_type);
	identify(c_type);

	return 0;
}
