/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:01:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/08 14:02:02 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string const &name);
		Character(Character const &obj);
		~Character();
		Character &operator= (const Character &obj);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		void		setEmptyInventory();
		void		emptyInventory();
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;

};


#endif //CHARACTER_HPP
