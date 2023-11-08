/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:27:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/06 21:40:15 by gd-harco         ###   ########.fr       */
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
	public	:
		AMateria ();
		AMateria(std::string const & type);
		AMateria (AMateria const &obj);
		~AMateria ();
		AMateria &operator= (const AMateria &obj);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
