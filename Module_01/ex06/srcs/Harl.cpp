/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:26:10 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/05 12:25:07 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"
#include "header.hpp"

void Harl::_debug(void) {
	std::cout << "This is a debug message." << std::endl;
	this->_info();
}

void Harl::_info(void) {
	std::cout << "This is an informative message." << std::endl;
	this->_warning();
}

void Harl::_warning(void) {
	std::cout << "This is a warning message, you should stop and invistigate." << std::endl;
	this->_error();
}

void Harl::_error(void) {
	std::cout << "Segmentation fault :/\n(this is a message print by Harl, don't panic!)." << std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
	std::string table[4] = {"debug", "info", "warning", "error"};

	while (i < 4 && level.compare(table[i]) != 0)
		i++;
	switch (i) {
		case 0:
			(Harl::_debug)();
			break;
		case 1:
			(Harl::_info)();
			break;
		case 2:
			(Harl::_warning)();
			break;
		case 3:
			(Harl::_error)();
			break;
		default:
			std::cout << "Probably complaining about insignificant problems" <<std::endl;
			break;
	}
}
