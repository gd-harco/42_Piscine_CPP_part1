/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:33:50 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 17:15:45 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	Cat : public Animal
{
	public	:
		Cat ();
		Cat (Cat const &obj);
		~Cat ();
		Cat &operator= (const Cat &obj);
		void makeSound() const;
		void	setIdea(int id);
		void	printIdea(int id);
	private:
		Brain* brain;
};

#endif
