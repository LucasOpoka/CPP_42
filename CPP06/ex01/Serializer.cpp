/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:03:34 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/19 14:21:59 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Serializer.hpp"

Serializer::Serializer() {};
Serializer::~Serializer() {};
Serializer::Serializer(const Serializer& o) {(void)o;};
Serializer&	Serializer::operator=(const Serializer& o) {(void)o; return *this;};

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
