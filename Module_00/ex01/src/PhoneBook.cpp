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

PhoneBook::PhoneBook(){
	this->oldest = -1;
}

void	PhoneBook::create_contact(){
	int	to_create = increment_oldest();
	contact_list[to_create].intialise();
	std::cout << "Contact " << contact_list[to_create].get_name() <<  " successfully created" << std::endl;
}

int		PhoneBook::increment_oldest(){
	if (oldest == 7)
		oldest = 0;
	else
		oldest++;
	return (oldest);
}

int		PhoneBook::get_oldest(){
	return (oldest);
}

Contact	PhoneBook::get_contact(int index){
	return (contact_list[index]);
}
