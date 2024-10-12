/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:22:54 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 21:06:57 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("DefaultName", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}


FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap parametrized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &o): ClapTrap(o)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &o)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &o)
	{
		this->~FragTrap();
		new(this) FragTrap(o);
	}
	return *this;
}

FragTrap::~FragTrap() {std::cout << "The almighty destructor was called for FragTrap " << _name <<std::endl;}

void FragTrap::attack(const std::string &target)
{
	if (!_hitPts)
		std::cout << "FragTrap " << _name << " can't attack from the afterlife!" << std::endl;
	else if (!_engPts)
		std::cout << "FragTrap " << _name << " is tired, can't attack from the couch!" << std::endl;
	else
	{
		_engPts--;
		std::cout << "FragTrap " << _name << " attacks " << target
				  << " causing an stupefying " << _attPts
				  << " points of damage. Not even Michael could match that!" << std::endl;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << "  requests the highest of fives!!!" << std::endl;
	std::cout << "https://www.youtube.com/watch?v=_lEedyxkbNo" << std::endl;
}
