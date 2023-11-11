/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:09:34 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 14:20:45 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
		: AMateria("cure") {
	std::cerr << "Cure : Default Constructor Called" << std::endl;
}

Cure::Cure(Cure const &obj)
		: AMateria(obj) {
	std::cerr << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure::~Cure() {
	std::cerr << "Cure : Destructor Called" << std::endl;
}

Cure	&Cure::operator= (const Cure &obj) {
	std::cerr << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->m_type = obj.m_type;
	}
	return (*this);
}

Cure	*Cure::clone() const {
	return new Cure;
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals <name>’s wounds *";
	(void)target;
}
