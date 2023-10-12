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

enum field{
	fName = 0,
	lName = 1,
	nName = 2,
	nb = 3,
	secret =4
};

class Contact
{
public:
	void		intialise();
	void		print();
	std::string	get_name();
	std::string	tronc_info[3];
private:
	std::string _info[5];
};


#endif //CONTACT_H
