/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:01:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 11:49:26 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "LMateria.hpp"


class Character : public ICharacter {
	public:
		Character(std::string const &name);
		Character(Character const &obj);
		~Character();
		Character &operator= (const Character &obj);

		void		setEmptyInventory();
		void		emptyInventory();
		bool		checkAvailable(AMateria* m);
		void		equip(AMateria* m);
		void		unequip(int idx);
		std::string	const & getName() const;
	private:
		Character();
		std::string	_name;
		AMateria	*_inventory[4];
//		void		use(int idx, ICharacter& target) = 0;
};


#endif //CHARACTER_HPP
