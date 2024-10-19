/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 15:53:57 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 16:30:09 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *generate()
{
	int	r;

	std::srand(time(NULL));
	r = rand() % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else if (r == 2)
		return new C();
	return 0;
}

void identify(Base *p)
{
	if (!p)
		std::cout << "Null pointer" << std::endl;
	else if (dynamic_cast<A *>(p))
		std::cout << "A type" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B type" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C type" << std::endl;
	else
		std::cout << "Not A, B or C" << std::endl;
}

void identify(Base &p)
{
	try {dynamic_cast<A &>(p);}
	catch(const std::exception& e)
	{
		try {dynamic_cast<B &>(p);}
		catch(const std::exception& e)
		{
			try {dynamic_cast<C &>(p);}
			catch(const std::exception& e) {std::cout << "Not A, B or C" << std::endl;}
			std::cout << "C type" << std::endl;
			return;
		}
		std::cout << "B type" << std::endl;
		return;
	}
	std::cout << "A type" << std::endl;
	return ;
}
