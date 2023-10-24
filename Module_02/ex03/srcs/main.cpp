/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 21:19:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 14:42:28 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main() {
	Point 	A(2, 0.33446f);
	Point	B(2, 5.25818f);
	Point	C(8.35224f, 1.38954f);
	Point	D(2, 3.0398f);

	std::cout << "Testing triangle ABC with:\nA = " << A << " \nB = " << B << "\nC = " << C << std::endl;
	std::cout << "Point to test = " << D << std::endl;
	std::cout << std::boolalpha << bsp(A, B, C, D) << std::endl;
}
