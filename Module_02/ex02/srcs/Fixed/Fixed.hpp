/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:45 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 10:23:25 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed	{
private:
	int	_rawBits;
	static const int _fractionalBits = 8;
public:
	//constructor, destructor & copy assignment:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed& old);
	~Fixed();
	Fixed& operator=(const Fixed& rhs);

	//comparaison operator:
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;

	//arithmetic operators:
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;

	//increment/decrement operators:
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	//getter:
	int getRawBits() const;

	//setter:
	void setRawBits(int fixe_number_value);

	//member function:
	float				toFloat( void ) const;
	int					toInt( void ) const;
	static Fixed		&min(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static Fixed		&max(Fixed &first, Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream &operator <<(std::ostream &output, const Fixed &fixed);
#endif //FIXED_HPP
