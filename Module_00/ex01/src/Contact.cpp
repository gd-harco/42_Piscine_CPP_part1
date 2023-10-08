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

void	Contact::intialise()
{
	std::cout << "First Name:" << std::endl;
	std::cin >> this->first_name;
	std::cout << "Last Name:" << std::endl;
	std::cin >> this->last_name;
	std::cout << "Nick Name:" << std::endl;
	std::cin >> this->nick_name;
	std::cout << "Phone Number:" << std::endl;
	std::cin >> this->number;
	std::cout << "Darkest secret:" << std::endl;
	std::cin >> this->secret;
}

void	Contact::print()
{
	std::cout << "First Name:" << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << "Last Name:" << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << "Nick Name:" << std::endl;
	std::cout << this->nick_name << std::endl;
	std::cout << "Phone Number:" << std::endl;
	std::cout << this->number << std::endl;
	std::cout << "Darkest secret:" << std::endl;
	std::cout << this->secret << std::endl;
}
