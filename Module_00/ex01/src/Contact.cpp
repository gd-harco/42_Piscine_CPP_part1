/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:46:57 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/07 21:15:47 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "header.h"

Contact::Contact()
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nick_name = "";
	this->_number = "";
	this->_secret = "";
}

void	Contact::intialise()
{
	inputWithPrompt(this->_first_name, "First Name:");
	inputWithPrompt(this->_last_name, "Last Name:");
	inputWithPrompt(this->_nick_name, "Nickname:");
	inputWithPrompt(this->_number, "Number:");
	inputWithPrompt(this->_secret, "Darkest Secret:");
	std::cout << this;
}

std::string	Contact::get_name()
{
	return (this->_first_name);
}
