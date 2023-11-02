/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:01:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 11:40:19 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "header.hpp"

class DiamondTrap
		: public FragTrap, public ScavTrap {
private:
	std::string _name;
public:
	DiamondTrap(const std::string &name);
};


#endif //DIAMONDTRAP_HPP
