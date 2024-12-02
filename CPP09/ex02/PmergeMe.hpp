/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:37:26 by lopoka            #+#    #+#             */
/*   Updated: 2024/12/02 17:34:20 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

class PmergeMe
{
	private:
			std::vector<int> _vec;
			std::deque<int> _deq;
	public:
			PmergeMe();
			PmergeMe(char **av);
			PmergeMe(const PmergeMe &original);
			~PmergeMe();

			PmergeMe &operator = (const PmergeMe &original);

			template <class T> static void mergeSort(T &container);
			template <class T> static void mergeBack(T &container, T &left, T &right);
			void sortVector();
			void sortDeque();
			
			template <class T> static void printContainer(T &container);
			void printVector();
			void printDeque();
};
