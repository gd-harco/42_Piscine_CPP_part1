/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:00:49 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 14:01:37 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

//https://www.youtube.com/watch?v=HYAgJN3x4GA
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed s1 = c.get_y() - a.get_y();
	Fixed s2 = c.get_x() - a.get_x();
	Fixed s3 = b.get_y() - a.get_y();
	Fixed s4 = point.get_y() - a.get_y();

	Fixed w1 = (a.get_x() * s1 + s4 * s2 - point.get_x() * s1) / (s3 * s2 - (b.get_x()-a.get_x()) * s1);
	Fixed w2 = (s4- w1 * s3) / s1;
	return w1 >= 0 && w2 >= 0 && (w1 + w2) <= 1;
}
