/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 15:21:01 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type)
{
	std::cout << "WrongAnimal parametrized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original): _type(original._type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){std::cout << "WrongAnimal destructor called" << std::endl;}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &original)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~WrongAnimal();
		new(this) WrongAnimal(original);
	}
	return *this;
}

std::string	WrongAnimal::getType() const {return _type;}

void	WrongAnimal::makeSound() const
{
	std::cout << "An WrongAnimal makes a wrong_animal sound" << std::endl;
}
