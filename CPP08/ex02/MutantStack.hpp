/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:24:04 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/24 22:39:55 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <stack>
#include <iostream>

template <class T> class MutantStack: public std::stack<T>
{
	public:
			MutantStack();
			MutantStack(const MutantStack &original);
			~MutantStack();
			
			MutantStack &operator = (const MutantStack &m);

			typedef	typename std::stack<T>::container_type::iterator iterator;
			iterator begin();
			iterator end();

			typedef	typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			reverse_iterator rbegin();
			reverse_iterator rend();


			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			const_iterator cbegin() const;
			const_iterator cend() const;

			typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
			const_reverse_iterator crbegin() const;
			const_reverse_iterator crend() const;
};

#include "MutantStack.tpp"
