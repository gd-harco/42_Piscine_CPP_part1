/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:31:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:49:14 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
	: type("undefined") {
	std::cout << "Animal : Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const &obj) : type(obj.type) {
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal::~Animal() {
	std::cout << "Animal : Destructor Called" << std::endl;
}

Animal	&Animal::operator= (const Animal &obj)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

std::string	Animal::getType() const {
	return this->type;
}
