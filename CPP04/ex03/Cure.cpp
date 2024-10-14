/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:42:08 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 13:49:19 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &original): AMateria(original._type)
{
	//std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator = (Cure const &original)
{
	//std::cout << "Cure copy assigment operator called" << std::endl;
	if (this != &original)
	{
		this->~Cure();
		new(this) Cure(original);
	}
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure()); 
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
