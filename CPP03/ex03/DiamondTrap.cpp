/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:22:54 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 23:30:43 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DefaultName_clap_name", 100, 50, 30), _name("DefaultName")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name", 100, 50, 30), _name(name)
{
	std::cout << "DiamondTrap parametrized constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &o): ClapTrap(o), ScavTrap(o), FragTrap(o), _name(o._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &o)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &o)
	{
		this->~DiamondTrap();
		new(this) DiamondTrap(o);
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {std::cout << "The almighty destructor was called for DiamondTrap " << _name <<std::endl;}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I? Am I Diamond trap " << _name
			  << " or am I ClapTrap " << ClapTrap::_name << "?" << std::endl;
}
