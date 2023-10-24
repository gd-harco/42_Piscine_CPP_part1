/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:19:06 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 11:21:19 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"
//Private members:
//◦ A Fixed const attribute x.
//◦ A Fixed const attribute y.
//◦ Anything else useful.
//• Public members:
//◦ A default constructor that initializes x and y to 0.
//◦ A constructor that takes as parameters two constant floating-point numbers.
//It initializes x and y with those parameters.
//◦ A copy constructor.
//◦ A copy assignment operator overload.
//◦ A destructor.
//◦ Anything else useful.

class Point {
private:
	const	Fixed _x;
	const	Fixed _y;
public:
	Point(); //default constructor
	Point(const float xToCreate, const float yToCreate);
	Point(const Point& old); //copy cosntructor
	~Point(); // destructor
	Point& operator=(const Point& rhs);
	bool operator==(const Point &rhs);
	bool operator<(const Point &rhs) const;
	bool operator>(const Point &rhs) const;
	bool operator<=(const Point &rhs) const;
	bool operator>=(const Point &rhs) const;
	const Fixed &get_x() const;
	const Fixed &get_y() const;
};

std::ostream &operator <<(std::ostream &output, const Point &point);


#endif //POINT_HPP
