/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:16:52 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 13:36:43 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

// Constructors and destructor
Fixed::Fixed(): _val(0) {}

Fixed::Fixed(const int value): _val(value << _frac_bits) {}

Fixed::Fixed(const float value): _val((int)roundf(value * (1 << _frac_bits))) {}

Fixed::Fixed(const Fixed &original)
{
	*this = original;
}

Fixed &Fixed::operator=(const Fixed &original)
{
	if (this != &original)
		this->_val = original.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

// Reading and setting bits
int  Fixed::getRawBits() const
{
	return _val;
}

void Fixed::setRawBits(int const value)
{
	_val = value;
}

// Conversions to float and int
float Fixed::toFloat(void) const
{
	return _val / (float)(1 << _frac_bits);
}

int Fixed::toInt() const
{
	return _val >> _frac_bits;
}

// Comparison operators
bool Fixed::operator >  (const Fixed &f) const {return this->_val >  f._val;}
bool Fixed::operator <  (const Fixed &f) const {return this->_val <  f._val;}
bool Fixed::operator >= (const Fixed &f) const {return this->_val >= f._val;}
bool Fixed::operator <= (const Fixed &f) const {return this->_val <= f._val;}
bool Fixed::operator == (const Fixed &f) const {return this->_val == f._val;}
bool Fixed::operator != (const Fixed &f) const {return this->_val != f._val;}

// Math operators
Fixed Fixed::operator + (const Fixed &f) const {return (Fixed(this->toFloat() + f.toFloat()));}
Fixed Fixed::operator - (const Fixed &f) const {return (Fixed(this->toFloat() - f.toFloat()));}
Fixed Fixed::operator * (const Fixed &f) const {return (Fixed(this->toFloat() * f.toFloat()));}
Fixed Fixed::operator / (const Fixed &f) const {return (Fixed(this->toFloat() / f.toFloat()));}

// Pre increments
Fixed &Fixed::operator ++ () {return (this->_val++, *this);}
Fixed &Fixed::operator -- () {return (this->_val--, *this);}

// Post increments
Fixed Fixed::operator ++ (int) {Fixed tmp(*this); return(this->_val++, tmp);}
Fixed Fixed::operator -- (int) {Fixed tmp(*this); return(this->_val--, tmp);}

// Min maxing
Fixed &Fixed::min(Fixed &a,Fixed &b) {return (a < b ? a : b);}
Fixed &Fixed::max(Fixed &a,Fixed &b) {return (a > b ? a : b);}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {return (a < b ? a : b);}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {return (a > b ? a : b);}

std::ostream &operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

