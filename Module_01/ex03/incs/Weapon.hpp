/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:50:38 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/15 14:50:38 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	std::string const & getType();
	void	setType(std::string toSet);
private:
	std::string _type;
};


#endif //WEAPON_HPP
