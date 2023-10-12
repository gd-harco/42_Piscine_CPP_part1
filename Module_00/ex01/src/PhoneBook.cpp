/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:10:03 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/07 21:16:30 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "header.h"

static void	printHeader();

PhoneBook::PhoneBook(){
	this->oldest = -1;
	this->size = 0;
}

void	PhoneBook::create_contact(){
	int	to_create = ++oldest;
	contact_list[to_create].intialise();
	if (size <8)
		size++;
	std::cout << "Contact " << contact_list[to_create].get_name() <<  " successfully created" << std::endl;
}

int		PhoneBook::get_oldest(){
	return (oldest);
}

Contact	PhoneBook::get_contact(int index){
	return (contact_list[index]);
}

static void	print_contact(PhoneBook book, int index){
	std::cout << "|" << std::setw(10) << index + 1 << "|";
	for (int i = 0; i < 3; i++)
		std::cout << std::setw(10) << book.get_contact(index).tronc_info[i] << "|" ;
	std::cout << std::endl;
}

void	PhoneBook::search()
{
	int i = 0;

	std::cout << SEPERATOR << std::endl;
	printHeader();
	std::cout << SEPERATOR << std::endl;
	while (i < this->size)
	{
		print_contact(*this, i);
		std::cout << SEPERATOR << std::endl;
		i++;
	}
}

static void	printHeader(){
	std::string h1 = "Index", h2 = "First Name", h3 = " Last Name", h4 = "  Nickname";

	std::cout << "|" << std::setw(10) << std::setfill(' ') << h1 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h2 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h3 << "|";
	std::cout << std::setw(10) << std::setfill(' ') << h4 << "|" << std::endl;
}
