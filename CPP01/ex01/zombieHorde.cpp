/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:32:48 by lopoka            #+#    #+#             */
/*   Updated: 2024/11/07 16:50:18 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
		return NULL;
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].label(name);
	return horde;
}
