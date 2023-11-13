/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:09:34 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 14:21:55 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <ICharacter.hpp>

Ice::Ice()
		: AMateria("ice") {
	std::cerr << "Ice : Default Constructor Called" << std::endl;
}

Ice::Ice(Ice const &obj)
		: AMateria(obj) {
	std::cerr << "Copy Constructor Called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Ice::~Ice() {
	std::cerr << "Ice : Destructor Called" << std::endl;
}

Ice	&Ice::operator= (const Ice &obj) {
	std::cerr << "Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		this->m_type = obj.m_type;
	}
	return (*this);
}

Ice	*Ice::clone() const {
	return new Ice;
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}
