/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:22:54 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 18:36:50 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("DefaultName"), _hitPts(10), _engPts(10), _attPts(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPts(10), _engPts(10), _attPts(0)
{
	std::cout << "ClapTrap parametrized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o): _name(o._name), _hitPts(o._hitPts), _engPts(o._engPts), _attPts(o._attPts)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &o)
{
	std::cout << "Claptrap copy assignment operator called" << std::endl;
	if (this != &o)
	{
		this->~ClapTrap();
		new(this) ClapTrap(o);
	}
	return *this;
}

ClapTrap::~ClapTrap() {std::cout << "The almighty destructor was called for ClapTrap " << _name <<std::endl;}

void ClapTrap::attack(const std::string &target)
{
	if (!_hitPts)
		std::cout << "ClapTrap " << _name << " can't attack from the afterlife!" << std::endl;
	else if (!_engPts)
		std::cout << "ClapTrap " << _name << " is tired, can't attack from the couch!" << std::endl;
	else
	{
		_engPts--;
		std::cout << "ClapTrap " << _name << " attacks " << target
				  << " causing a measly " << _attPts
				  << " points of damage. Pam Beesly could do better!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPts)
	{
		std::cout << "ClapTrap " << _name << " took " << amount
				  << " damage. It is more dead now!" << std::endl;
		return ;
	}
	_hitPts = (_hitPts > amount ? _hitPts - amount : 0);
	std::cout << "ClapTrap " << _name << " took " << amount << " damage. "
			  << (_hitPts ? "It is still hanging by." : "It ain't clappin no moo.") << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPts)
		std::cout << "ClapTrap " << _name << " isn't well. "
				  << "Healing won't suffice, we need a ressurection here!" << std::endl;
	else if (!_engPts)
		std::cout << "ClapTrap " << _name << " is too tired to be bothered to repair itself!" << std::endl;
	else
	{
		_engPts--;
		_hitPts += amount;
		std::cout << "ClapTrap " << _name << " did some robo yoga, " << amount
				  << " HP have been repaired." << std::endl;
	}
}
