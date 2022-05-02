/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:37:20 by spoolpra          #+#    #+#             */
/*   Updated: 2022/05/02 13:51:59 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b(Fixed(5.05f) * Fixed(2));

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl << std::endl;

	// Pre-Post Increment/Decrement Test
	std::cout << "Pre-Post increment test" << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl << std::endl;

	// Comparison Test
	std::cout << "Comparison test" << std::endl;
	std::cout << "10.55 > 10.54: " << std::boolalpha;
	std::cout << (Fixed(10.55f) > Fixed(10.54f)) << std::endl;
	std::cout << "10.55 < 10.54: " << std::boolalpha;
	std::cout << (Fixed(10.55f) < Fixed(10.54f)) << std::endl;
	std::cout << "-156.455f >= 156.456f: " << std::boolalpha;
	std::cout << (Fixed(-156.455f) > Fixed(156.456f)) << std::endl;
	std::cout << "-156.455f <= 156.456f: " << std::boolalpha;
	std::cout << (Fixed(-156.455f) <= Fixed(156.456f)) << std::endl;
	std::cout << "123456 == 123456f: " << std::boolalpha;
	std::cout << (Fixed(123456) == Fixed(123456.0f)) << std::endl;
	std::cout << "123456 != 123456f: " << std::boolalpha;
	std::cout << (Fixed(123456) != Fixed(123456.0f)) << std::endl;


	// Operator Test
	std::cout << "20.5612 + (-10.48): ";
	std::cout << (Fixed(20.5612f) + Fixed(-10.48f)) << std::endl;
	std::cout << "20.5612 - (-10.48): ";
	std::cout << (Fixed(20.5612f) - Fixed(-10.48f)) << std::endl;
	std::cout << "20.5612 * (-10.48): ";
	std::cout << (Fixed(20.5612f) * Fixed(-10.48f)) << std::endl;
	std::cout << "20.5612 / (-10.48): ";
	std::cout << (Fixed(20.5612f) / Fixed(-10.48f)) << std::endl;

	return 0;
}
