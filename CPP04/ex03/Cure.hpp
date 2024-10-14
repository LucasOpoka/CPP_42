/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:37:12 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 20:42:00 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
			Cure();
			Cure(const Cure &original);
			~Cure();
		
			Cure &operator = (const Cure &original);
		
			AMateria *clone() const;
			void use(ICharacter &target);
};
