/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 13:59:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 17:22:06 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &original): Animal(original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain(*original._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	_brain = 0;
}

Dog &Dog::operator = (const Dog &original)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~Dog();
		new(this) Dog(original);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "A Dog makes a hau hau sound" << std::endl;
}
