/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:43:49 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 10:46:42 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
		: ClapTrap(name) {
	this->_HP =	100;
	this->_EP = 100;
	this->_AD = 30;
	std::cout << "FragTrap " + name + " created by default constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &old)
		: ClapTrap(old) {
	std::cout << "FragTrap " + this->_name + " created by copy constructor" << std::endl;

}

FragTrap::~FragTrap() {
	std::cout << "Fragtrap " + this->_name + " destroyed by default destructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &old) {
	if (this == &old)
		return *this;
	std::cout << "Copy assignment called, copying " + old._name + " into " + this->_name <<std::endl;
	this->_name = old._name;
	this->_HP = old._HP;
	this->_EP = old._EP;
	this->_AD = old._AD;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << "Hey ! Give me 5 !" << std::endl;
}
