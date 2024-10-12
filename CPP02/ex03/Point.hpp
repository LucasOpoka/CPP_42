/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:59:14 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 14:21:38 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include "Fixed.hpp"

class Point
{
	private:
			const Fixed _x;
			const Fixed _y;
	public:
			Point();
			Point(const float a, const float b);
			Point(const Point &original);
			~Point();

			Point &operator = (const Point &original);

			Fixed x() const;
			Fixed y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
