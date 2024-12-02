/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:50:51 by lopoka            #+#    #+#             */
/*   Updated: 2024/12/02 17:32:37 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};
PmergeMe::PmergeMe(char **av)
{
	int i;
	char remain;

	while(*av)
	{
		std::istringstream token(*av);

		if (!(token >> i) || token >> remain)
	    	throw std::runtime_error("Failed to cast char* to int!");
		if (i <= 0)
			throw(std::runtime_error("Non positive integer in sequence!"));

		_vec.push_back(i);
		_deq.push_back(i);
		av++;
	}
};
PmergeMe::PmergeMe(const PmergeMe &o): _vec(o._vec), _deq(o._deq) {}
PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator = (const PmergeMe &original)
{
	if (this != &original)
	{
		this->~PmergeMe();
		new(this) PmergeMe(original);
	}
	return (*this);
};

template <class T> void PmergeMe::printContainer(T &container)
{
	for (int i : container)
		std::cout << i << " ";
	std::cout << std::endl;
}

void PmergeMe::printVector() {PmergeMe::printContainer(_vec);}
void PmergeMe::printDeque() {PmergeMe::printContainer(_deq);}

void PmergeMe::sortVector(){PmergeMe::mergeSort(_vec);}
void PmergeMe::sortDeque() {PmergeMe::mergeSort(_deq);}

template <class T> void PmergeMe::mergeBack(T &container, T &left, T &right)
{
	size_t i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size())
	{
        if (left[i] <= right[j]) 
            container[k++] = left[i++];
        else
            container[k++] = right[j++];
    }

    while (i < left.size())
        container[k++] = left[i++];

    while (j < right.size())
        container[k++] = right[j++];
}

template <class T> void PmergeMe::mergeSort(T &container)
{
	size_t mid = container.size() / 2;
	if (mid > 0)
	{ 
		T left(container.begin(), container.begin() + mid);
		T right(container.begin() + mid, container.end());
		mergeSort(left);
		mergeSort(right);
		mergeBack(container, left, right);
	}
}
