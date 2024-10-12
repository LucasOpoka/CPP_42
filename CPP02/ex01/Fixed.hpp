/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:09:35 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/11 18:30:12 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
//#include <iomanip>
#include <cmath>

class Fixed
{
	private:
			int					_val;
			static const int	_frac_bits = 8;
	public:
			Fixed();
			Fixed(const int value);
			Fixed(const float value);
			Fixed(const Fixed &original);
			Fixed &operator = (const Fixed &original);
			~Fixed();

			int		getRawBits() const;
			void	setRawBits(int const value);
			float	toFloat() const;
			int		toInt() const;
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);
