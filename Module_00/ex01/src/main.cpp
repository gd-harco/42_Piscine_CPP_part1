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

int main(void)
{
	PhoneBook	adress_book;

	std::string	input;
	std::cin >> input;
	while (input.compare("EXIT") != 0){
		if (input.compare("ADD") == 0)
		adress_book.create_contact();
		else if (input.compare("SEARCH") == 0)
			std::cout << "Todo" << std::endl;
		std::cin >> input;
	}
	std::cout << "Quitting..." << std::endl;
	return (0);
}
