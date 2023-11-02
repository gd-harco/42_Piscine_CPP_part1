/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:45:24 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 11:56:03 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_HP =	100;
	this->_EP = 50;
	this->_AD = 20;
	std::cout << "ScavTrap " + this->_name + " created by name constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->_HP =	100;
	this->_EP = 50;
	this->_AD = 20;
	std::cout << "ScavTrap " + name + " created by name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &old) : ClapTrap(old) {
	std::cout << "ScavTrap " + this->_name + " created by copy constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " + this->_name + " destroyed by default destructor" << std::endl;

}

void ScavTrap::attack(const std::string target) {
	if (!this->_HP || !this->_EP) {
		std::cout << this->_name + " couldn't perform the attack against " + target << std::endl;
		return ;
	}
	std::cout << "ScavTrap " + this->_name +
			" attacks " + target + ", causing "
			<< this->_AD << " points of damage!" << std::endl;
	this->_EP--;
}

void ScavTrap::guardGate() {
	std::cout << this->_name + " is now in gatekeeping mode." << std::endl;
};
