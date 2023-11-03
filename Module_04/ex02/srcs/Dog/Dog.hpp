/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:33:50 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 17:40:17 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Dog : public Animal
{
	public	:
		Dog ();
		Dog (Dog const &obj);
		~Dog ();
		Dog &operator= (const Dog &obj);
		void makeSound() const;
		void	setIdea(int id);
		void	printIdea(int id);
	private:
		Brain* brain;
};

#endif
