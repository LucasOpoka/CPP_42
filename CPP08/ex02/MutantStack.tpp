/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:44:52 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/24 22:05:18 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T> MutantStack<T>::MutantStack() {}
template <class T> MutantStack<T>::MutantStack(const MutantStack &o): std::stack<T>(o) {}
template <class T> MutantStack<T>::~MutantStack() {}

template <class T> MutantStack<T> &MutantStack<T>::operator = (const MutantStack &o)
{
	if (this != &o)
	{
		this->~MutantStack();
		new(this) MutantStack(o);
	}
	return *this;
}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{return this->c.begin();}

template <class T> typename MutantStack<T>::iterator MutantStack<T>::end()
{return this->c.end();}

template <class T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{return this->c.rbegin();}

template <class T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{return this->c.rend();}



template <class T> typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const
{return this->c.cbegin();}

template <class T> typename MutantStack<T>::const_iterator MutantStack<T>::cend() const
{return this->c.cend();}

template <class T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const
{return this->c.crbegin();}

template <class T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const
{return this->c.crend();}
