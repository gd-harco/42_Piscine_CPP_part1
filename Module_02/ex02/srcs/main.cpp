/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:19:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 10:25:03 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(){
	{
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);

		a = Fixed(12.34f);

		std::cout << "----Testing Constructor and Assignment Operator----" << std::endl;
		std::cout << "Expecting a to be 1234.43 "<< std::endl;
		std::cout << "a is " << a << "\n" << std::endl;

		std::cout << "----Testing Copy Constructor---- " << std::endl;
		std::cout << "Expecting d to be 10 "<< std::endl;
		std::cout << "d is " << d << "\n "<< std::endl;

		std::cout << "----Testing toInt() method---- "<< std::endl;
		std::cout << "Expecting b to be 10 as integer "<< std::endl;
		std::cout << "b is " << b.toInt() << "\n" << " as integer\n "<< std::endl;

		std::cout << "----Testing Comparison Operators---- "<< std::endl;
		std::cout << "Expecting 'a > b' to be true "<< std::endl;
		std::cout << "a > b: " << (a > b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'a < b' to be false "<< std::endl;
		std::cout << "a < b: " << (a < b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'a >= b' to be true "<< std::endl;
		std::cout << "a >= b: " << (a >= b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'a <= b' to be true "<< std::endl;
		std::cout << "a <= b: " << (a <= b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'a == b' to be false "<< std::endl;
		std::cout << "a == b: " << (a == b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'd == b' to be true "<< std::endl;
		std::cout << "d == b: " << (d == b ? "True" : "False") << std::endl;
		std::cout << "Expecting 'd != b' to be false "<< std::endl;
		std::cout << "d != b: " << (d != b ? "True\n" : "False\n") << std::endl;

		std::cout << "----Testing Arithmetic Operators---- "<< std::endl;
		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "Expecting 'a / 0' to show an error "<< std::endl;
		std::cout << "a / 0: " << a / 0 << "\n" << std::endl;

		std::cout << "----Testing Increment Operators----" << std::endl;
		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << "\n" << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << "\n" << std::endl;

		std::cout << "----Testing decrement Operators----" << std::endl;
		std::cout << "a--: " << a-- << std::endl;
		std::cout << "a: " << a << "\n" << std::endl;
		std::cout << "--a: " << --a << std::endl;
		std::cout << "a: " << a << "\n" << std::endl;

		//TODO: test the 3 other function
		std::cout << "----Testing Min Max Functions ----"<< std::endl;
		std::cout << "Expecting 'min(a, b)' to be 10 "<< std::endl;
		std::cout << "min(a, b): " << Fixed::min(a, b) << "\n"<< std::endl;
	}
	{
		std::cout << "----Executing provided test in assigment----" << std::endl;
		std:: cout << "----Expected output is:----:\n"
					"0 \n"
					"0.00390625 \n"
					"0.00390625 \n"
					"0.00390625 \n"
					"0.0078125 \n"
					"10.1016 \n"
					"10.1016 \n" << std::endl;
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
}
