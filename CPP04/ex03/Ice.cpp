/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:42:08 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 13:49:31 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &original): AMateria(original._type)
{
	//std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator = (Ice const &original)
{
	//std::cout << "Ice copy assigment operator called" << std::endl;
	if (this != &original)
	{
		this->~Ice();
		new(this) Ice(original);
	}
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice()); 
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

