/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:11:53 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 14:21:49 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Point::Point(): _x(), _y() {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &original): _x(original._x), _y(original._y) {}

Point::~Point() {}

Point &Point::operator = (const Point &original)
{
	if (this != &original)
	{
		this-> ~Point();
      	new(this) Point(original);
	}
	return *this;
}

Fixed Point::x() const {return _x;}
Fixed Point::y() const {return _y;}
