/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:26:10 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/19 21:17:38 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Harl.hpp"
#include "header.hpp"

void Harl::_debug(void){
	std::cout << "This is a debug message." << std::endl;
}

void Harl::_info(void){
	std::cout << "This is an informative message." << std::endl;
}

void Harl::_warning(void){
	std::cout << "This is a warning message, you should stop and invistigate." << std::endl;
}

void Harl::_error(void){
	std::cout << "Segmentation fault :/\n(this is a message print by Harl, don't panic!)." << std::endl;
}

void Harl::complain(std::string level){
	s_table table[4] = {
		{"debug", &Harl::_debug},
		{"info", &Harl::_info},
		{"warning", &Harl::_warning},
		{"error", &Harl::_error},
	};
	for (int i=0; i < 4; i++){
		if (level.compare(table[i].level) == 0)
			return (this->*table[i].call)();
	}
	std::cout << "Unrecognized level" << std::endl;
}
