/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:02:09 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 17:09:57 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by gd-harco on 02/11/23.
//

#include "header.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
		: _name("default") {
	std::cout << "DiamondTrap " + this->_name + " created by default constructor" << std::endl;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = this->FragTrap::_HP;
	this->_EP = this->ScavTrap::_EP;
	this->_AD = this->FragTrap::_AD;
}

DiamondTrap::DiamondTrap(const std::string &name)
			: ClapTrap(name), _name(name) {
	std::cout << "DiamondTrap " + this->_name + " created by name constructor" << std::endl;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = this->FragTrap::_HP;
	this->_EP = this->ScavTrap::_EP;
	this->_AD = this->FragTrap::_AD;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :
		ClapTrap(other),
		ScavTrap(other),
		FragTrap(other) {
	std::cout << "DiamondTrap " + this->_name + " created by copy constructor" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " + this->_name + " destroyed by default destructor" << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "_name : " + this->_name <<std::endl;
	std::cout << "ClapTrap::_name : " + this->ClapTrap::_name << std::endl;
}
