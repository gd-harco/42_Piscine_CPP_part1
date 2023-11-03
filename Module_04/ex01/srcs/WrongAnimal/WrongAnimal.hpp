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

#ifndef _WrongAnimal_HPP_
#define _WrongAnimal_HPP_

#include <iostream>

class	WrongAnimal
{
	protected	:
		std::string	type;

	public	:
		WrongAnimal ();
		WrongAnimal (WrongAnimal const &obj);
		virtual ~WrongAnimal ();
		WrongAnimal &operator= (const WrongAnimal &obj);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif
