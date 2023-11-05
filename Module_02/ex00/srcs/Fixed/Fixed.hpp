/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:45 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/05 16:50:23 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
private:
	int	rawBits;
	static const int fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& old);
	Fixed& operator=(const Fixed& rhs);
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif //FIXED_HPP
