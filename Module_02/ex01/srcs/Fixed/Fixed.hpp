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

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
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
	void setRawBits(const int raw);
	float toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &operator <<(std::ostream &output, const Fixed &fixed);
#endif //FIXED_HPP
