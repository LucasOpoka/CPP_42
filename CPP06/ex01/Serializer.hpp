/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:56:49 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 14:19:30 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Data.hpp"
#include <cstdint>
#include <iostream>

class	Serializer
{
	private:
			Serializer();
			Serializer(Serializer const &original);
			Serializer &operator = (Serializer const &original);
			~Serializer();
	public:
			static uintptr_t serialize(Data *ptr);
			static Data *deserialize(uintptr_t raw);
};
