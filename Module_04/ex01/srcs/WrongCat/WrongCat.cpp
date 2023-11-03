/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:34:48 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:57:47 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat : Default Constructor Called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &obj) : WrongAnimal(obj) {
	std::cout << "WrongCat : Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
	else
		this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat : Destructor Called" << std::endl;
}

WrongCat	&WrongCat::operator= (const WrongCat &obj)
{
	std::cout << "WrongCat : Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}


void	WrongCat::makeSound() const {
	std::cout << "WrongCat goes Hihan" << std::endl;
}
