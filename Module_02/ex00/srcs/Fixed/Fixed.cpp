/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:57:44 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/05 16:53:16 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by gd-harco on 22/10/23.
//

#include "Fixed.hpp"

Fixed::Fixed()
	:rawBits(0){
	std::cout << "Fixed : Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& old)
	:rawBits(old.rawBits){
	std::cout << "Fixed : Copy constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Fixed : Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return rawBits;
}

void Fixed::setRawBits(int const raw){
	rawBits = raw;
}

Fixed &Fixed::operator=(const Fixed &rhs){
	std::cout << "Fixed : Copy assignment operator called" << std::endl;
	this->rawBits = rhs.rawBits;
	return *this;
}
