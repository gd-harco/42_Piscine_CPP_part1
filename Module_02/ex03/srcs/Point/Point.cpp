/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:19:06 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 14:32:37 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(), _y(){};

Point::Point(const float xToCreate, const float yToCreate) : _x(xToCreate), _y(yToCreate){};

Point::Point(const Point& old): _x(old._x), _y(old._y) {};

Point::~Point() {};

Point &Point::operator=(const Point& rhs) {
	(void)rhs;
	return *this;
}

bool Point::operator==(const Point &rhs)
{
	if (this->_x == rhs._x && this->_y == rhs._y)
		return true;
	else
		return false;
}

bool Point::operator<(const Point &rhs) const {
	if (_x < rhs._x)
		return true;
	if (rhs._x < _x)
		return false;
	return _y < rhs._y;
}

bool Point::operator>(const Point &rhs) const {
	return rhs < *this;
}

bool Point::operator<=(const Point &rhs) const {
	return !(rhs < *this);
}

bool Point::operator>=(const Point &rhs) const {
	return !(*this < rhs);
}

const Fixed &Point::get_x() const {
	return _x;
}

const Fixed &Point::get_y() const {
	return _y;
}

std::ostream &operator <<(std::ostream &output, const Point &point)
{
	output << "[" << point.get_x() << "/" << point.get_y() << "]";
	return (output);
}
