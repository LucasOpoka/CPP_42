/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:13:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/08 16:40:44 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string	_name;
			Weapon		*_weapon;
	public:
			HumanB(std::string name);
			void	attack(void) const;
			void	setWeapon(Weapon &weapon);
};
