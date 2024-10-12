/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:16:52 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/11 18:18:46 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

Fixed::Fixed(): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _val(value << _frac_bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _val((int)roundf(value * (1 << _frac_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &original)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed &Fixed::operator=(const Fixed &original)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &original)
		this->_val = original.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _val;
}

void Fixed::setRawBits(int const value)
{
	std::cout << "setRawBits member function called" << std::endl;
	_val = value;
}

float Fixed::toFloat(void) const
{
	return _val / (float)(1 << _frac_bits);
}

int Fixed::toInt() const
{
	return _val >> _frac_bits;
}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
