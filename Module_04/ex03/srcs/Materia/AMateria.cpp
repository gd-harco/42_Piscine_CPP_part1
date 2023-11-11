/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:51:58 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 15:16:18 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "LMateria.hpp"

AMateria::AMateria()
		: m_type("undefined") {
	LMateriaAddBack(this);
	std::cerr << "AMateria : Default Constructor Called" << std::endl;
}

AMateria::AMateria(const std::string &type)
		: m_type(type) {
	LMateriaAddBack(this);
	std::cerr << "AMateria : type Constructor Called" << std::endl;
}

AMateria::AMateria(AMateria const &obj) {
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
	LMateriaAddBack(this);
}

AMateria::~AMateria() {
	std::cout << "AMateria : Destructor Called" << std::endl;
}

AMateria	&AMateria::operator= (const AMateria &obj) {
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj)
		this->m_type = obj.m_type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return this->m_type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "Undefined materia usage" << std::endl;
	(void)target;
}
