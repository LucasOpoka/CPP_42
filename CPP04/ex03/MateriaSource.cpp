/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:41 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 13:46:59 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _inventory() {}

MateriaSource::MateriaSource(const MateriaSource &o)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = o._inventory[i] ? o._inventory[i]->clone() : 0;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete _inventory[i];
		_inventory[i] = 0;
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &original)
{
	if (this != &original)
	{
		this->~MateriaSource();
		new(this) MateriaSource(original);
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == m)
			return;
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return;
		}	
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i] && _inventory[i]->getType() == type)
				return (_inventory[i]->clone());
	return (0);
}
