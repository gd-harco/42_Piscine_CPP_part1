/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:25:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 16:51:09 by gd-harco         ###   ########.fr       */
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

	while (this->_inventory[i])
		i++;
	this->_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 4 || !this->_inventory[idx])
		std::cout << "No materia equipped at slot " << idx << std::endl;
	else


}

void Character::use(int idx, ICharacter &target) {

}
