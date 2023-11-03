/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:33:50 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:56:54 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WrongCat_HPP_
#define _WrongCat_HPP_

#include <iostream>
#include "WrongAnimal.hpp"
// ******************************************************** //
//                         CLASSES                        //
// ****************************************************** //

class	WrongCat : public WrongAnimal
{
	public	:
		WrongCat ();
		WrongCat (WrongCat const &obj);
		~WrongCat ();
		WrongCat &operator= (const WrongCat &obj);
		void makeSound() const;
};

#endif
