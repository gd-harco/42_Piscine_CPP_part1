/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 10:42:59 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() {
	ClapTrap parent("parent");
	FragTrap child("child");
	parent.printStat();
	child.printStat();
	child.highFivesGuys();

	std::cout << "\ntesting copy constructor\n" << std::endl;
	FragTrap copy(child);
	copy.printStat();

	std::cout << "\ntesting assignment operator:\n" << std::endl;
	FragTrap empty("empty");
	copy.attack("Nothing");
	empty.printStat();
	child.printStat();
	empty = copy;
	empty.printStat();
}
