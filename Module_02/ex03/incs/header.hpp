/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:01:55 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 12:03:10 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>

# include "Fixed.hpp"
# include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //HEADER_HPP
