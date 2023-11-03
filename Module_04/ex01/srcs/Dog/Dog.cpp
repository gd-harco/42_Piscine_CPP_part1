/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:30:26 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog : Default Constructor Called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog const &obj) : Animal(obj) {
	std::cout << "Dog : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
	else
		this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog : Destructor Called" << std::endl;
}

Dog	&Dog::operator= (const Dog &obj)
{
	std::cout << "Dog : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}


void	Dog::makeSound() const {
	std::cout << "Dog goes Wouf" << std::endl;
}
