/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:18:05 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 14:18:05 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Ice_HPP_
#define _Ice_HPP_

#include "AMateria.hpp"

class	Ice : public AMateria {
	public	:
		Ice ();
		Ice (Ice const &obj);
		~Ice ();
		Ice &operator= (const Ice &obj);

		Ice* clone() const;
		void use(ICharacter& target);
};
#endif
