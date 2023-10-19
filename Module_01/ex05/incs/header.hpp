/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:01:36 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/19 20:04:12 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP
#include "Harl.hpp"
#include <cstdlib>

typedef void (Harl::*ptr)(void);

struct s_table{
	std::string	level;
	ptr			call;
};
#endif
