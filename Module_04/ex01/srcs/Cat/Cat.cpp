/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:51:49 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat : Default Constructor Called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &obj) : Animal(obj) {
	std::cout << "Cat : Copy Constructor Called" << std::endl;
	this->type = obj.type;
	this->brain = new Brain(*(obj.brain));
}

Cat::~Cat() {
	std::cout << "Cat : Destructor Called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Cat : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
		delete this->brain;
		this->brain = new Brain(*obj.brain);
	}
	return (*this);
}


void	Cat::makeSound() const {
	std::cout << "Cat goes Miaw" << std::endl;
}

void Cat::setIdea(int id) {
	if (id <= 0 || id > 100)
		return (std::cout << "wrong Id number" << std::endl, void(0));
	std::string str;
	std::cout << "enter the idea" << std::endl;
	std::getline(std::cin, str);
	if (!std::cin)
		return;
	this->brain->ideas[id - 1] = str;
}

void Cat::printIdea(int id) {
	if (id <= 0 || id > 100)
		return (std::cout << "wrong Id number" << std::endl, void(0));
	std::cout << "Idea id[" << id << "] : " + this->brain->ideas[id - 1] << std::endl;
}
