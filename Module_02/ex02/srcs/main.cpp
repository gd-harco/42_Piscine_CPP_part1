/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:19:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 10:37:57 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "----Testing Constructor and Assignment Operator----\n";
	std::cout << "Expecting a to be 1234.43\n";
	std::cout << "a is " << a << "\n\n";

	std::cout << "----Testing Copy Constructor----\n";
	std::cout << "Expecting d to be 10\n";
	std::cout << "d is " << d << "\n\n";

	std::cout << "----Testing toInt() method----\n";
	std::cout << "Expecting b to be 10 as integer\n";
	std::cout << "b is " << b.toInt() << " as integer\n\n";

	std::cout << "----Testing Comparison Operators----\n";
	std::cout << "Expecting 'a > b' to be true\n";
	std::cout << "a > b: " << (a > b ? "True" : "False") << "\n\n";

	std::cout << "----Testing Arithmetic Operators----\n";
	std::cout << "Expecting 'a + b' to be 1244.43\n";
	std::cout << "a + b: " << a + b << "\n\n";

	std::cout << "----Testing Increment Operators----\n";
	std::cout << "Expecting 'a++' to be 1234.43 and then a to be 1234.44\n";
	std::cout << "a++: " << a++ << "\n";
	std::cout << "a: " << a << "\n\n";

	std::cout << "----Testing decrement Operators----\n";
	std::cout << "Expecting 'a--' to be 1234.44 and then a to be 1234.43\n";
	std::cout << "a--: " << a-- << "\n";
	std::cout << "a: " << a << "\n\n";

	std::cout << "----Testing Min Max Functions ----\n";
	std::cout << "Expecting 'min(a, b)' to be 10\n";
	std::cout << "min(a, b): " << Fixed::min(a, b) << "\n\n";
	}
	std::cout << "----Executing provided test in assigment----\n";
	std:: cout << "----Expected output is:----\n"
					"0\n"
				"0.00390625\n"
				"0.00390625\n"
				"0.00390625\n"
				"0.0078125\n"
				"10.1016\n"
				"10.1016\n" << std::endl;
	std::cout << "----Actual output is:----" << std::endl;
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}
