/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind2.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:18:53 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/23 16:18:56 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

template <class T> class T::iterator easyfind(T &cont, int i)
{
	class T::iterator itr = std::find(cont.begin(), cont.end(), i);
	
	if (itr == cont.end())
		throw(std::runtime_error("Element " + std::to_string(i) + " not present in container!"));
	return itr;
}
