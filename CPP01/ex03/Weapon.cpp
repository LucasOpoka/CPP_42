/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:50:29 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/08 16:39:15 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){};

std::string const &Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string type) {_type = type;}
