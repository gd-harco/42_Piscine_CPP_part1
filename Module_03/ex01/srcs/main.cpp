/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/01 14:23:01 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main() {

	ClapTrap parent("parent");
	ScavTrap child("child");
	parent.printStat();
	child.printStat();
	child.guardGate();

	std::cout << "testing copy constructor" << std::endl;
	ScavTrap copy(child);
	copy.printStat();

	std::cout << "\ntesting assignment operator:" << std::endl;
	ScavTrap empty("empty");
	copy.attack("Nothing");
	empty.printStat();
	empty = copy;
	empty.printStat();


}
