/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:46:57 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/13 12:47:33 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "header.h"

void	Contact::intialise()
{
	std::string prompt[5] = {"First name:", "Last name:", "Nickname:", "Phone number:", "Secret"};

	for (int i = 0; i < 5; i++)
	{
		std::cout << prompt[i] << std::endl;
		std::getline(std::cin, this->_info[i]);
		if (!std::cin)
			handleInputError();
		if (this->_info[i].empty())
		{
			std::cout << "Field can't be empty." << std::endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		this->_info[i].size() > 10 ?
				this->tronc_info[i] = this->_info[i].substr(0, 9) + ".":
				this->tronc_info[i] = this->_info[i];
	}
}

void	Contact::print(){
	std::string prompt[5] = {"First name: ", "Last name: ", "Nickname: ", "Phone number: ", "Secret: "};

	for (int i = 0; i < 5; i++)
		std::cout << prompt[i] << this->_info[i] << std::endl;
}


std::string	Contact::get_name()
{
	return (this->_info[fName]);
}
