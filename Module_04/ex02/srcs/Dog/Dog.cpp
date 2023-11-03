/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 18:19:02 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog : Default Constructor Called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &obj) : Animal(obj) {
	std::cout << "Dog : Copy Constructor Called" << std::endl;
	this->type = obj.type;
	this->brain = new Brain(*(obj.brain));
}

Dog::~Dog() {
	std::cout << "Dog : Destructor Called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*(obj.brain));
	}
	return (*this);
}


void	Dog::makeSound() const {
	std::cout << "Dog goes Wouf" << std::endl;
}

void Dog::setIdea(int id) {
	if (id <= 0 || id > 100)
		return (std::cout << "wrong Id number" << std::endl, void(0));
	std::string str;
	std::cout << "enter the idea" << std::endl;
	std::getline(std::cin, str);
	if (!std::cin)
		return;
	this->brain->ideas[id - 1] = str;
}

void Dog::printIdea(int id) {
	if (id <= 0 || id > 100)
		return (std::cout << "wrong Id number" << std::endl, void(0));
	std::cout << "Idea id[" << id << "] : " + this->brain->ideas[id - 1] << std::endl;
}
