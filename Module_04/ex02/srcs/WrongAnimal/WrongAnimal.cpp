/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:31:00 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:25:56 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("Wrongly undefined") {
	std::cout << "WrongAnimal : Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj) : type(obj.type) {
	std::cout << "WrongAnimal : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal : Destructor Called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &obj)
{
	std::cout << "WrongAnimal : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal doesn't know what sound to produce" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}
