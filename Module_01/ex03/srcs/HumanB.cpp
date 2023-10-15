/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:01 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/15 14:56:01 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name,  Weapon* toEquiped):
		_equiped(toEquiped), _name(name)
{
	std::cout << "HumanB " << this->_name << " created with Weapon" << this->_equiped->getType() << std::endl;
}

HumanB::HumanB(std::string name):
		_name(name)
{
	this->_equiped = NULL;
	std::cout << "HumanB " << this->_name << " created with no Weapon" << std::endl;
}


HumanB::~HumanB(){
	std::cout << "HumanB " << this->_name << " deleted" << std::endl;
}

void	HumanB::attack(){
	if (this->_equiped)
		std::cout << this->_name << " attacked with their " << this->_equiped->getType() << std::endl;
	else
		std::cout << this->_name << " attacked with their Fist, it's not very effective..." << std::endl;
}

void HumanB::setWeapon(Weapon *toEquip)
{
	if (!this->_equiped)
	{
		this->_equiped = toEquip;
		std::cout << this->_name << " found a weapon! it's a " << this->_equiped->getType() << std::endl;
	} else
	{
		std::string old = this->_equiped->getType();

		this->_equiped = toEquip;
		std::cout << "succesfully changed " << this->_name << " "<< old << "  to " << this->_equiped->getType() << std::endl;
	}
}
