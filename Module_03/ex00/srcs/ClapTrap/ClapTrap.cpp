/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:58:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 19:30:19 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name):
	_name(name), _HP(10), _EP(10), _AD(0) {
	std::cout << "ClapTrap " + this->_name + " created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " + this->_name + " destroyed" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &old):
	_name(old._name), _HP(old._HP), _EP(old._EP), _AD(old._AD) {
	std::cout << "ClapTrap " + this->_name + " created" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old) {
	this->_name = old._name;
	this->_HP = old._HP;
	this->_EP = old._EP;
	this->_AD = old._AD;
	return *this;
}

void ClapTrap::attack(const std::string target) {
	if (!this->_HP || !this->_HP)
		return ;
	std::cout << "ClapTrap " + this->_name +
	" attacks " + target + ", causing "
	<< this->_AD << " points of damage!" << std::endl;
	this->_EP--;

}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_HP)
		return ;
	std::cout << "ClapTrap " + this->_name + " took "
	<< amount << " damage" << std::endl;
	this->_HP--;
	if (this->_HP == 0)
		std::cout << this->_name << "has fainted" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_EP)
		return ;
	std::cout << "ClapTrap " + this->_name + " repaired itself of " << amount << std::endl;
	this->_HP += amount;
	this->_EP--;
}
