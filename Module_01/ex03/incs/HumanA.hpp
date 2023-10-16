/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:55:15 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/15 14:55:15 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>


class HumanA
{
public:
	HumanA(std::string name, Weapon& toEquiped);
	~HumanA();
	void	attack();
private:
	Weapon&		_equiped;
	std::string	_name;
};


#endif //HUMANA_HPP
