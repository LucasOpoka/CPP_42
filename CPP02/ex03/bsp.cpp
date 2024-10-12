/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lopoka <lopoka@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:12:26 by lopoka            #+#    #+#             */
/*   Updated: 2024/10/12 14:34:34 by lopoka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

Fixed	sign(const Point &p1, const Point &p2, const Point &p3)
{
	return ((p1.x() - p3.x()) * (p2.y() - p3.y()) - (p2.x() - p3.x()) * (p1.y() - p3.y()));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1 = sign(point, a, b);
	Fixed d2 = sign(point, b, c);
	Fixed d3 = sign(point, c, a);

	bool same_signs = (d1 > 0 && d2 > 0 && d3 > 0) || (d1 < 0 && d2 < 0 && d3 < 0);
	bool edge = d1 == 0 || d2 == 0 || d3 == 0;
	return same_signs && !edge;
}
