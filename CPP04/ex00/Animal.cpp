/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 14:55:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type)
{
	std::cout << "Animal parametrized constructor called" << std::endl;
}

Animal::Animal(const Animal &original): _type(original._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(){std::cout << "Animal destructor called" << std::endl;}

Animal &Animal::operator = (const Animal &original)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~Animal();
		new(this) Animal(original);
	}
	return *this;
}

std::string	Animal::getType() const {return _type;}

void	Animal::makeSound() const
{
	std::cout << "An Animal makes a animal sound" << std::endl;
}
