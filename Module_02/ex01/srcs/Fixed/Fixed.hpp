/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:45 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/23 11:09:19 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by gd-harco on 22/10/23.
//

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
/*
 * A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A constructor that takes a constant floating-point number as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00.
• A member function float toFloat( void ) const;
that converts the fixed-point value to a floating-point value.
• A member function int toInt( void ) const;
that converts the fixed-point value to an integer value.
 */
class Fixed
{
private:
	int	_rawBits;
	static const int _fractionalBits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed& old);
	~Fixed();
	Fixed& operator=(const Fixed& rhs);
	int getRawBits() const;
	void setRawBits(int fixe_number_value);
	float toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator <<(std::ostream &output, const Fixed &fixed);
#endif //FIXED_HPP
