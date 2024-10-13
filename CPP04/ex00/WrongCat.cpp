/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 15:25:38 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original): WrongAnimal(original)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){std::cout << "WrongCat destructor called" << std::endl;}

WrongCat &WrongCat::operator = (const WrongCat &original)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~WrongCat();
		new(this) WrongCat(original);
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "A WrongCat makes a wrong_miau wrong_miau sound" << std::endl;
}
