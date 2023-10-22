/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:45 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/22 19:06:26 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by gd-harco on 22/10/23.
//

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
/*
 * Private members:
◦ An integer to store the fixed-point number value.
◦ A static constant integer to store the number of fractional bits. Its value
will always be the integer literal 8.
• Public members:
◦ A default constructor that initializes the fixed-point number value to 0.
◦ A copy constructor.
◦ A copy assignment operator overload.
◦ A destructor.
◦ A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value.
◦ A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number.
 */
class Fixed
{
private:
	int	rawBits;
	static const int fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& old);
	Fixed& operator=(const Fixed& rhs);
	int getRawBits() const;
	void setRawBits(int fixe_number_value);
};


#endif //FIXED_HPP
