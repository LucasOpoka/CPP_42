/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:23:37 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/20 15:40:00 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

template <class T> void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <class T> const T &max(const T &a, const T &b)
{
	return a > b ? a : b;
}

template <class T> const T &min(const T &a, const T &b)
{
	return a < b ? a : b;
}
