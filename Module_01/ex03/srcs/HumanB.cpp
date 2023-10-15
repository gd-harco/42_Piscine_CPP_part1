/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:44:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/14 19:58:18 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,  Weapon& toEquiped):
	_equiped(toEquiped), _name(name)
	{
	std::cout << "HumanA " << this->_name << " created with Weapon" << this->_equiped.getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA " << this->_name << " deleted" << std::endl;
}

void	HumanA::attack(){
	std::cout << this->_name << " attacked with their " << this->_equiped.getType() << std::endl;
}
