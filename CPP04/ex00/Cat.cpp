/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 14:52:17 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &original): Animal(original)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){std::cout << "Cat destructor called" << std::endl;}

Cat &Cat::operator = (const Cat &original)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~Cat();
		new(this) Cat(original);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "A Cat makes a miau miau sound" << std::endl;
}
