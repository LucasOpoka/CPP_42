/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:52:15 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/21 19:18:17 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

template <class T> class Array
{
	private:
			unsigned int _size;
			T *_array;
	public:
			Array();
			Array(unsigned int size);
			Array(const Array<T> &original);
			~Array();

			Array<T> &operator = (const Array<T> &original);
			T &operator [] (unsigned int idx);

			unsigned int size();			
};

#include "Array.tpp"
