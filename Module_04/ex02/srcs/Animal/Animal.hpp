/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:28:01 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 10:32:31 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	Animal
{
	protected	:
		std::string	type;
	public	:
		Animal ();
		Animal (Animal const &obj);
		virtual ~Animal () = 0;
		Animal &operator= (const Animal &obj);
		virtual void makeSound() const = 0; //This is a pure virtual method, it define my class as an Abstract class.
		std::string getType() const;
};

#endif
