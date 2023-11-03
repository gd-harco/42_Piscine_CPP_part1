/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:33:50 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:10:09 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
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
};

#endif
