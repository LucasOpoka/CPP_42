/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:10:03 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/14 13:40:44 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
			AMateria *_inventory[4];
	public:
			MateriaSource();
			MateriaSource(const MateriaSource &original);
			~MateriaSource();

			MateriaSource &operator = (const MateriaSource &original);

			void learnMateria(AMateria *m);
			AMateria *createMateria(const std::string &type);
};
