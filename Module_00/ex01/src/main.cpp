/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:00:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/13 13:07:52 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "header.h"

void	search(PhoneBook adress_book);
void	printHeader();

int main(void)
{
	PhoneBook	adress_book;
	std::string	input;

	std::cout << "Welcome to your phonebook !" << std::endl;
	std::cout << BASE_PROMPT << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		handleInputError();
	while (input.compare("EXIT") != 0){
		if (input.compare("ADD") == 0)
		adress_book.create_contact();
		else if (input.compare("SEARCH") == 0){
			adress_book.search();
		}
		else
			std::cout << "Unrecognised command" << std::endl;
		std::cout << BASE_PROMPT << std::endl;
		std::getline(std::cin, input);
		if (!std::cin)
			handleInputError();
	}
	std::cout << "Quitting..." << std::endl;
	return (0);
}

void	handleInputError()
{
	std::cout << "Error reading input (maybe cin was closed ?)."<< std::endl;
	std::cout << "Quitting..." << std::endl;
	exit(1);
}
