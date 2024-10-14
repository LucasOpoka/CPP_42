/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 00:09:53 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 14:55:05 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"

Character::Character():	_name("default_name"), _inventory()
{
	//std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name): _name(name), _inventory()
{
	//std::cout << "Character parametrized constructor called" << std::endl;
}

Character::~Character()
{
	//std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(const Character &o): _name(o._name)
{
	//std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = o._inventory[i] ? o._inventory[i]->clone() : 0;
}

Character &Character::operator = (const Character &original)
{
	//std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &original)
	{
		this->~Character();
		new(this) Character(original);
	}
	return *this;
}

std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}
	delete m;
	m = 0;
}

void Character::unequip(int	idx)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter	&target)
{
	if (0 <= idx && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

AMateria *Character::getInventory(int idx)
{
	if (0 <= idx && idx < 4)
		return _inventory[idx];
	return 0;
}
