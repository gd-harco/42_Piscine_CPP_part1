/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:25:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 12:57:40 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Character.hpp"
extern LMateria	*g_List;

Character::Character()
		: _name("undefinedCharacter"){
	setEmptyInventory();
	std::cerr << "Character : Default Constructor Called" << std::endl;
}

Character::Character(const std::string &name)
		: _name(name) {
	setEmptyInventory();
	std::cerr << "Character : Name Constructor Called" << std::endl;
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
	for (int i=0; i < 4; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

bool Character::checkAvailable(AMateria* m) {
	LMateria*	list = g_List;
	int			i = 0;

	while (list){
		if (list->current == m)
			break ;
		list = list->next;
	}
	if (!list){
		std::cout << "Materia alrady equiped elsewhere" << std::endl;
		return false;
	}
	while (i < 4 && this->_inventory[i]) {
		if (this->_inventory[i] == m) {
			std::cout << "Materia already equiped" << std::endl;
			return false;
		}
		i++;
	}
	return true;
}

void Character::equip(AMateria *m) {
	int i = 0;
	if (!checkAvailable(m))
		return;
	while (this->_inventory[i])
		i++;
	this->_inventory[i] = m;
	LMateriaRemove(m);
}

void Character::unequip(int idx) {
	int const place = idx - 1;
	if (place < 0 || place > 3  || !this->_inventory[place])
		std::cout << "No materia equipped at slot " << place << std::endl;
	else{
		LMateriaAddBack(this->_inventory[place]);
		this->_inventory[place] = NULL;
	}
}

std::string const &Character::getName() const {
	return this->_name;
}

AMateria *Character::getInventory(int idx) const {
	return this->_inventory[idx];
}

void Character::use(int idx, ICharacter &target) {
	if (idx <= 0 || idx > 4 || !this->_inventory[idx - 1]) {
		std::cout << "No materia equipped at slot " << idx << std::endl;
		return;
	}
	else
	std::cout << this->getName() + " ";
	this->_inventory[idx - 1]->use(target);
}
