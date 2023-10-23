/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:46:53 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/23 16:48:28 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed():
	_rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old) {
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::Fixed(const int number):
	_rawBits(number << this->_fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number):
	_rawBits(roundf(number * (1 << this->_fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits() const {
	return _rawBits;
}

void Fixed::setRawBits(int fixe_number_value) {
	this->_rawBits = fixe_number_value;
}

float Fixed::toFloat(void) const {
	return (float)this->_rawBits / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const {
	return (this->_rawBits >> this->_fractionalBits);
}

std::ostream &operator <<(std::ostream &output, const Fixed &fixed) {
	output << fixed.toFloat();
	return (output);
}
