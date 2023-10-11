/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:00:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/07 20:55:29 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "header.h"

void	search(PhoneBook adress_book);


int main(void)
{
	PhoneBook	adress_book;

	std::string	input;
	std::cout << "Welcome to your phonebook !" << std::endl;
	std::cout << BASE_PROMPT << std::endl;
	std::cin >> input;
	while (input.compare("EXIT") != 0){
		if (input.compare("ADD") == 0)
		adress_book.create_contact();
		else if (input.compare("SEARCH") == 0){
			search(adress_book);
		}
		std::cout << BASE_PROMPT << std::endl;
		std::cin >> input;
	}
	std::cout << "Quitting..." << std::endl;
	return (0);
}


void inputWithPrompt(std::string &attribute, const std::string &prompt)
{
	std::cout << prompt << std::endl;
	std::cin >> attribute;
	if (!std::cin)
		handleInputError();
}

void	handleInputError()
{
	std::cout << "Error reading input (maybe cin was closed ?)" << std::endl;
	exit(1);
}

/*

 */
void	search(PhoneBook adress_book)
{
	std::string h1 = "     Index", h2 = "First Name", h3 = " Last Name", h4 = "  Nickname";
	std::string header = "|" + h1 + "|" + h2 + "|" + h3 + "|" + h4 + "|";

	std::cout << SEPERATOR << std::endl;
	std::cout << header << std::endl;
	std::cout << SEPERATOR << std::endl;
	std::cout << std::setw(10) << std::setfill(' ') << adress_book.get_contact(0).get_name() << "|";
	std::cout << SEPERATOR << std::endl;
	(void)adress_book;
}
