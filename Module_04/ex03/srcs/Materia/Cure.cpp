/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:36:18 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/06 21:36:37 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
		:AMateria() {
	this->m_type = "cure";
	std::cout << "Cure : Default Constructor Called" << std::endl;
}

Cure::Cure(Cure const &obj) {
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure::~Cure() {
	std::cout << "Cure : Destructor Called" << std::endl;
}

Cure	&Cure::operator= (const Cure &obj) {
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->m_type = obj.m_type;
	}
	return (*this);
}

void	Cure::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at "
			<<target.getName() + "*" << std::endl;
}
