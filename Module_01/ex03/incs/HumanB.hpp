/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:55:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/15 14:55:52 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanB
{
public:
	HumanB(std::string name, Weapon* toEquiped);
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon *toEquip);
private:
	Weapon*		_equiped;
	std::string	_name;
};


#endif //HUMANA_HPP
