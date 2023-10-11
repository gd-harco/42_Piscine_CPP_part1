/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 11:40:38 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/07 21:16:03 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
public:
	Contact();
	void		intialise();
	void		print();
	std::string	get_name();


private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string	_number;
	std::string	_secret;
};


#endif //CONTACT_H
