/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:37:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/02 14:54:46 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

static void	testBsp(const Point a, const Point b, const Point c, const Point point)
{
	std::cout << point << " in " << "(" << a << ", " << b << ", " << c << "): ";
	std::cout << std::boolalpha << bsp(a, b, c, point) << std::endl;
}

int main( void )
{
	Point	a(0, 0);
	Point	b(10, 30);
	Point	c(20, 0);

	testBsp(a, b, c, Point(10, 0));
	testBsp(a, b, c, Point(20.2, 0));
	testBsp(a, b, c, Point(30, 0));
	testBsp(a, b, c, Point(-1, 0));
	testBsp(a, b, c, Point(123.54, -781));
	testBsp(a, b, c, Point(-5, -20));
	testBsp(a, b, c, Point(10, 15));
}
