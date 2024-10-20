/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:53:03 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/20 18:19:24 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

template <class T> void iter(T *arr, size_t length, void (*f)(T &element))
{
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template <class T> void iter(T *arr, size_t length, void (*f)(const T &element))
{
	for (size_t i = 0; i < length; i++)
		(*f)(arr[i]);
}

template <class T> void	func(const T &element)
{
	std::cout << element << std::endl;
}
