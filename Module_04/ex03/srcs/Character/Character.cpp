/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:25:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 11:44:05 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Character.hpp"

Character::Character()
		: _name("undefinedCharacter"){

	std::cout << "Character : Default Constructor Called" << std::endl;
}

Character::Character(const std::string &name)
		: _name(name) {
	setEmptyInventory();
	std::cout << "Character : Name Constructor Called" << std::endl;
}

Character::Character(const Character &obj) {
	std::cout << "Character : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character::~Character() {
	std::cout << "Character : Destructor Called" << std::endl;
	emptyInventory();
}

Character &Character::operator=(const Character &obj) {
	if (this == &obj)
		return *this;
	emptyInventory();
	for (int i=0; i < 4 && obj._inventory[i]; i++){
		this->_inventory[i] = obj._inventory[i]->clone();
	}
	this->_name = obj._name;
	return *this;
}

void Character::setEmptyInventory() {
	for (int i=0; i<4; i++){
		this->_inventory[i] = NULL;
	}
}

void Character::emptyInventory() {
	for (int i=0; i < 4 && this->_inventory[i]; i++) {
		delete this->_inventory[i];
	}
}

void Character::equip(AMateria *m) {
	int	i=0;

	while (i < 4 && this->_inventory[i])
		i++;
	if (i == 4)
		std::cout << this->_name + " inventory is full" << std::endl;
	else{
		this->_inventory[i] = m;
		m->set_m_equiped_location(this->_inventory[i]);
	}
}

void Character::unequip(int idx) {
	int place = idx - 1;
	if (place < 0 || place > 3  || !this->_inventory[place])
		std::cout << "No materia equipped at slot " << place << std::endl;
	else{
		for (int i = place; i < 3 && this->_inventory[i]; i++)
			this->_inventory[i] = this->_inventory[i + 1];
		if (this->_inventory[3])
			this->_inventory[3] = NULL;
		//TODO: handle the unequiped materia
	}
}

std::string const &Character::getName() const {
	return this->_name;
}

//void Character::use(int idx, ICharacter &target) {
//
//}
