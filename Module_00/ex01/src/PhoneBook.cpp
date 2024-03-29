/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:10:03 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/13 13:13:59 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "header.h"

static void	printHeader();

PhoneBook::PhoneBook(){
	this->size = 0;
}

void	PhoneBook::create_contact(){
	int	to_create = this->size % 8;
	contact_list[to_create].intialise();
	size++;
	std::cout << "Contact " << contact_list[to_create].get_name() <<  " successfully created" << std::endl;
}

Contact	PhoneBook::get_contact(int index){
	return (contact_list[index]);
}

static void	displaySearchLine(PhoneBook book, int index){
	std::cout << "|" << std::setw(10) << index + 1 << "|";
	for (int i = 0; i < 3; i++)
		std::cout << std::setw(10) << book.get_contact(index).tronc_info[i] << "|" ;
	std::cout << std::endl;
}

void	PhoneBook::search()
{
	int i = 0;
	std::string s_input;
	int	input;

	if (this->size == 0)
	{
		std::cout << "Your phonebook is currently empty" << std::endl;
		return;
	}
	printHeader();
	while (i < this->size && i < 8)
	{
		displaySearchLine(*this, i);
		std::cout << SEPERATOR << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "Enter the index of the contact you wish to display, 0 to return to main menu." << std::endl;
	std::getline(std::cin, s_input);
	if (!std::cin)
		handleInputError();
	input = atoi(s_input.c_str());
	while ((input < 0 || input > 8) || input > this->size)
	{
		std::cout << "Contact does not exist\n" << "Enter the index of the contact you wish to display, 0 to return to main menu." << std::endl;
		std::getline(std::cin, s_input);
		if (!std::cin)
			handleInputError();
		input = atoi(s_input.c_str());
	}
	if (input == 0)
		return;
	this->contact_list[input - 1].print();
}

static void	printHeader(){
	std::string h1 = "Index", h2 = "First Name", h3 = " Last Name", h4 = "  Nickname";

	std::cout << SEPERATOR << std::endl;
	std::cout << "|" << std::setw(10) << std::setfill(' ') << h1 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h2 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h3 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h4 << "|" << std::endl;
	std::cout << SEPERATOR << std::endl;
}
