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
}

Cat::Cat(Cat const &obj) : Animal(obj) {
	std::cout << "Cat : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
	else
		this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat : Destructor Called" << std::endl;
}

Cat	&Cat::operator= (const Cat &obj)
{
	std::cout << "Cat : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}


void	Cat::makeSound() const {
	std::cout << "Cat goes Miaw" << std::endl;
}
