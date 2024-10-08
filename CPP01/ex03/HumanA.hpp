/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:13:02 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/08 16:40:35 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
			std::string	_name;
			Weapon		&_weapon;
	public:
			HumanA(std::string name, Weapon &weapon);
			void	attack(void) const;
};
