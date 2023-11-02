/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:01:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 12:39:54 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "header.hpp"

class DiamondTrap
		: public ScavTrap, public FragTrap {
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap(const std::string &name);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();
};

#endif //DIAMONDTRAP_HPP
