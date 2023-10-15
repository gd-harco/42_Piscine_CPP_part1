/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:50:51 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/15 14:50:56 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	this->setType(type);
}

std::string const & Weapon::getType(){
	return this->_type;
}

void	Weapon::setType(std::string toSet)
{
	this->_type = toSet;
}
