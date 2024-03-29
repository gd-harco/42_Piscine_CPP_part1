/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:55:23 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/04 17:09:04 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,  Weapon& toEquiped)
				:_equiped(toEquiped), _name(name) {
	std::cout << "HumanA " << this->_name << " created with Weapon" << this->_equiped.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << this->_name << " deleted" << std::endl;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacked with their " << this->_equiped.getType() << std::endl;
}
