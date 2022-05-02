/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:20:04 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/02 14:46:00 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	triArea(Point a, Point b, Point c)
{
	Fixed	area;

	area = (a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()));
	if (area >= Fixed())
		return (area);
	return (area * Fixed(-1));
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	Point	tmp(point);

	if (tmp == a || tmp == b || tmp == c)
		return (false);
	return (triArea(a, b, c) == (triArea(point, b, c) + triArea(a, point, c) + triArea(a, b, point)));
}
