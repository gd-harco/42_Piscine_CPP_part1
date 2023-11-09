/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:27:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 11:41:20 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMateria_HPP_
#define _AMateria_HPP_

#include <iostream>

//prototype to avoid include loop
class	ICharacter;

class	AMateria {
	protected	:
		std::string	m_type;
		void		*m_equipedLocation;
	public	:
		AMateria ();
		AMateria(std::string const & type);
		AMateria (AMateria const &obj);
		virtual ~AMateria ();
		AMateria &operator= (const AMateria &obj);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	void set_m_equiped_location(void *m_equiped_location);
};

#endif
