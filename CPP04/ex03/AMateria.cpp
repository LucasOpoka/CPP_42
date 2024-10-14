/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:25:57 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 13:50:06 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"

AMateria::AMateria(): _type("default_materia")
{
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type): _type(type)
{
	//std::cout << "AMateria parametrized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &original): _type(original._type)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator = (const AMateria &original)
{	
	//std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &original)
		_type = original._type;
	return *this;
}

std::string const &AMateria::getType() const {return _type;}

void AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "Something went terribly worng!" << std::endl;
}
