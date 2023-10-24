/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:58:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 17:07:04 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int			_HP;
	int			_EP;
	int			_AD;
public:
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &old);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &old);
	void	attack(const std::string target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};


#endif //CLAPTRAP_HPP
