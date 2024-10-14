/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 19:46:45 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/13 20:12:10 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
			std::string _type;
	public:
			AMateria();
			AMateria(AMateria const &original);
			AMateria(const std::string &type);
			virtual	~AMateria();

			AMateria &operator = (AMateria const &original);

			std::string const &getType() const;

			virtual AMateria *clone() const = 0;
			virtual void use(ICharacter &target);			
};
