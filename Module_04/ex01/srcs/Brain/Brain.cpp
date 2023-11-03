/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:15:03 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 14:15:03 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain : Default Constructor Called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain : Destructor Called" << std::endl;
}

Brain::Brain(Brain const &obj) {
	std::cout << "Brain : Copy Constructor Called" << std::endl;
	for (int i = 0; i < 100; i++){
		this->ideas[i] = obj.ideas[i];
	}
}

Brain	&Brain::operator= (const Brain &obj)
{
	std::cout << "Brain Copy Assignment Operator Called" << std::endl;
	if (this != &obj) {
		for (int i = 0; i < 100; i++){
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}
