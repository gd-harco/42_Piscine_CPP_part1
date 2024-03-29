/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:19:38 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 14:19:38 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cure_HPP_
#define _Cure_HPP_

#include "AMateria.hpp"

class	Cure : public AMateria {
	public	:
		Cure ();
		Cure (Cure const &obj);
		~Cure ();
		Cure &operator= (const Cure &obj);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
