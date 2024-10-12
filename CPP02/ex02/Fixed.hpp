/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:09:35 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 13:34:40 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <iomanip>
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
			~Fixed();

			int		getRawBits() const;
			void	setRawBits(int const value);
			float	toFloat() const;
			int		toInt() const;
	
			Fixed	&operator = (const Fixed &original);

			bool	operator >  (const Fixed &number) const;
			bool	operator <  (const Fixed &number) const;
			bool	operator >= (const Fixed &number) const;
			bool	operator <= (const Fixed &number) const;
			bool	operator == (const Fixed &number) const;
			bool	operator != (const Fixed &number) const;

			Fixed	operator +  (const Fixed &number) const;
			Fixed	operator -  (const Fixed &number) const;
			Fixed	operator *  (const Fixed &number) const;
			Fixed	operator /  (const Fixed &number) const;

			Fixed	&operator ++ ();
			Fixed	operator  ++ (int);
			Fixed	&operator -- ();
			Fixed	operator  -- (int);

			static Fixed		&min(Fixed &a, Fixed &b);
			static Fixed		&max(Fixed &a, Fixed &b);
			const static Fixed	&min(const Fixed &a, const Fixed &b);
			const static Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);
