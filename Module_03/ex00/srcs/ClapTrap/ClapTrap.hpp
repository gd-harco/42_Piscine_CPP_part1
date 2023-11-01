/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:58:52 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/31 18:53:01 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>
#include <iomanip>

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
	void	printStat();
	const std::string &get_name() const;

	int get_hp() const;

	int get_ep() const;

	int get_ad() const;
};


#endif //CLAPTRAP_HPP
