/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:43:49 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/01 14:43:49 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Fragtrap_HPP_
#define _Fragtrap_HPP_

#include <iostream>
#include "ClapTrap.hpp"

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	FragTrap : public ClapTrap
{
	public	:
		FragTrap (const std::string &name);
		FragTrap (FragTrap const &obj);
		~FragTrap ();
		FragTrap &operator=(const FragTrap &obj);
		void highFivesGuys(void);
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
