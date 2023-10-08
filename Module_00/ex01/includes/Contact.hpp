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
	void	intialise();
	void	print();
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	number;
	std::string	secret;
};

#endif //CONTACT_H
