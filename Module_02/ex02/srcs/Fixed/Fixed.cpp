/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:46:53 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/05 21:56:58 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// constructor & destructor messages are commented out for better readability
Fixed::Fixed():
	_rawBits(0){
//	std::cout << "Fixed : default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old) {
	*this = old;
//	std::cout << "Fixed : copy constructor called" << std::endl;
}

Fixed::Fixed(const int number):
	_rawBits(number << this->_fractionalBits){
//	std::cout << "Fixed : int constructor called" << std::endl;
}

Fixed::Fixed(const float number):
	_rawBits(roundf(number * (1 << this->_fractionalBits))){
//	std::cout << "Fixed : float constructor called" << std::endl;
}

Fixed::~Fixed(){
//	std::cout << "Fixed : destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs){
//	std::cout << "Fixed : copy assignment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits() const{
	return _rawBits;
}

void Fixed::setRawBits(const int raw){
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const{
	return (float)this->_rawBits / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const{
	return (this->_rawBits >> this->_fractionalBits);
}

bool Fixed::operator<(const Fixed &rhs) const{
	return _rawBits < rhs._rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const{
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const{
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const{
	return !(*this < rhs);
}

bool Fixed::operator==(const Fixed &rhs) const{
	return (this->_rawBits == rhs._rawBits);
}

bool Fixed::operator!=(const Fixed &rhs) const{
	return (this->_rawBits != rhs._rawBits);
}

Fixed Fixed::operator+(const Fixed &rhs) const{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) const{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const{
	if (rhs == 0) {
		std::cout << "Error: division by zero" << std::endl;
		return Fixed(0);
	}
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed &Fixed::operator++(){
	this->_rawBits+=1;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed tmp(*this);

	this->operator++();
	return tmp;
}

Fixed &Fixed::operator--(){
	this->_rawBits-=1;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed tmp(*this);

	this->operator--();
	return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second){
	return (first < second)
		? first
		: second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second){
	return (first < second)
			? first
			: second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second){
	return (first < second)
		? second
		: first;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second){
	return (first < second)
			? second
			: first;
}


std::ostream &operator <<(std::ostream &output, const Fixed &fixed){
	output << fixed.toFloat();
	return (output);
}
