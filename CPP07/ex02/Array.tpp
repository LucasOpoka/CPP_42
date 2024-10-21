/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array2.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:01:32 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/21 19:11:12 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Array.hpp"
#include <stdexcept>

template <class T> Array<T>::Array() : _size(0), _array(0) {};
template <class T> Array<T>::Array(unsigned int size): _size(size), _array(new T[size]) {};
template <class T> Array<T>::~Array() {delete[] _array;};
template <class T> Array<T>::Array(const Array<T> &o): _size(o._size), _array(new T[o._size])
{
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = o._array[i];
};

template <class T> Array<T> &Array<T>::operator = (const Array<T> &original)
{
	if (this != &original)
	{
		this->~Array();
		new(this) Array(original);
	}
	return (*this);
};

template <class T> T &Array<T>::operator [] (unsigned int idx)
{
	if (idx >= _size)
		throw(std::runtime_error("Error: index out of bounds"));
	return (_array[idx]);
}

template <class T> unsigned int Array<T>::size() {return _size;};
