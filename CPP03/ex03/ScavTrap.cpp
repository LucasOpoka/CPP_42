/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:22:54 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 20:17:56 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("DefaultName", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}


ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap parametrized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &o): ClapTrap(o)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &o)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &o)
	{
		this->~ScavTrap();
		new(this) ScavTrap(o);
	}
	return *this;
}

ScavTrap::~ScavTrap() {std::cout << "The almighty destructor was called for ScavTrap " << _name <<std::endl;}

void ScavTrap::attack(const std::string &target)
{
	if (!_hitPts)
		std::cout << "ScavTrap " << _name << " can't attack from the afterlife!" << std::endl;
	else if (!_engPts)
		std::cout << "ScavTrap " << _name << " is tired, can't attack from the couch!" << std::endl;
	else
	{
		_engPts--;
		std::cout << "ScavTrap " << _name << " attacks " << target
				  << " causing an astounding " << _attPts
				  << " points of damage. Only Michael could match that!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "  is now in Gate keeper mode" << std::endl;
}
