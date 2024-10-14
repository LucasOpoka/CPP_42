/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:37:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 20:40:29 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
			Ice();
			Ice(const Ice &original);
			~Ice();
		
			Ice &operator = (const Ice &original);
		
			AMateria *clone() const;
			void use(ICharacter &target);
};
