/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:58:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 11:52:23 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
# define SEPERATOR "+---------------+---------------+---------------+---------------+"

ClapTrap::ClapTrap() :
		_name("default"), _HP(10), _EP(10), _AD(0) {
	std::cout << "ClapTrap " + this->_name + " created by default constructor." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name):
	_name(name), _HP(10), _EP(10), _AD(0) {
	std::cout << "ClapTrap " + this->_name + " created by name constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old):
	_name(old._name), _HP(old._HP), _EP(old._EP), _AD(old._AD) {
	std::cout << "ClapTrap " + this->_name + " created by copy constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " + this->_name + " destroyed by default destructor" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &old) {
	this->_name = old._name;
	this->_HP = old._HP;
	this->_EP = old._EP;
	this->_AD = old._AD;
	return *this;
}

void ClapTrap::attack(const std::string target) {
	if (!this->_HP || !this->_EP) {
		std::cout << this->_name + " couldn't perform the attack against " + target << std::endl;
		return ;
	}
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
	this->_HP -= amount;
	if (this->_HP <= 0)
	{
		std::cout << this->_name << " has fainted" << std::endl;
		this->_HP = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_EP)
		return ;
	std::cout << "ClapTrap " + this->_name + " repaired itself of " << amount << std::endl;
	this->_HP += amount;
	this->_EP--;
}

const std::string &ClapTrap::get_name() const {
	return _name;
}

int ClapTrap::get_hp() const {
	return _HP;
}

int ClapTrap::get_ep() const {
	return _EP;
}

int ClapTrap::get_ad() const {
	return _AD;
}

void ClapTrap::printStat() {
	std::cout << "Current stat of " + this->_name + ":" << std::endl;
	std::string h1 = "Name", h2 = "Hit points", h3 = " Energy points", h4 = "  Attack damage";
	std::cout << SEPERATOR << std::endl;
	std::cout << "|" << std::setw(15) << std::setfill(' ') << h1 << "|";
	std::cout << std::setw(15) << std::setfill(' ') << h2 << "|";
	std::cout << std::setw(15) << std::setfill(' ') << h3 << "|";
	std::cout << std::setw(15) << std::setfill(' ') << h4 << "|" << std::endl;
	std::cout << SEPERATOR << std::endl;
	std::cout << "|" << std::setw(15) << std::setfill(' ') << this->get_name() << "|"
			<< std::setw(15) << std::setfill(' ') << this->get_hp() << "|"
			<< std::setw(15) << std::setfill(' ') << this->get_ep() << "|"
			<< std::setw(15) << std::setfill(' ') << this->get_ad() << "|" << std::endl;
	std::cout << SEPERATOR << std::endl;
}
