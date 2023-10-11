/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:47:07 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/07 21:07:45 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

class PhoneBook
{
public:
	PhoneBook();
	void		create_contact();
	int			get_oldest();
	int			increment_oldest();
	Contact		get_contact(int index);
private:
	Contact	contact_list[8];
	int		oldest;
};


#endif //PHONEBOOK_H
