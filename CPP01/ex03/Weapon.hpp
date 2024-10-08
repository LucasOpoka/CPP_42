/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:47:43 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/08 15:50:24 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>

class Weapon
{
	private:
			std::string	_type;
	public:
			Weapon(std::string type);
			void				setType(std::string type);
			std::string const	&getType(void);
};
