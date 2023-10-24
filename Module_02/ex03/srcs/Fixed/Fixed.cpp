/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:46:53 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 10:32:31 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed():
	_rawBits(0) {}

Fixed::Fixed(const Fixed& old) {
	*this = old;
}

Fixed::Fixed(const int number):
	_rawBits(number << this->_fractionalBits) {}

Fixed::Fixed(const float number):
	_rawBits(roundf(number * (1 << this->_fractionalBits))) {}

Fixed::~Fixed() {}

Fixed	&Fixed::operator=(const Fixed &rhs) {
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

bool Fixed::operator<(const Fixed &rhs) const {
	return _rawBits < rhs._rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const {
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const {
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const {
	return !(*this < rhs);
}

bool Fixed::operator==(const Fixed &rhs) const{
	return (this->_rawBits == rhs._rawBits);
}

bool Fixed::operator!=(const Fixed &rhs) const{
	return (this->_rawBits != rhs._rawBits);
}

Fixed Fixed::operator+(const Fixed &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed &Fixed::operator++() {
	this->_rawBits+=1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);

	this->operator++();
	return tmp;
}

Fixed &Fixed::operator--() {
	this->_rawBits-=1;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);

	this->operator--();
	return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second) {
	return (first < second)
		? first
		: second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
	return (first < second)
			? first
			: second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
	return (first < second)
		? second
		: first;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
	return (first < second)
			? second
			: first;
}


std::ostream &operator <<(std::ostream &output, const Fixed &fixed) {
	output << fixed.toFloat();
	return (output);
}
