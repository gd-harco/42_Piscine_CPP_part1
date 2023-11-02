/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/02 11:39:49 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int main() {
	DiamondTrap	clap("Scav");
	DiamondTrap	trap("Trap");

	clap.attack("Trap");
	trap.beRepaired(2);
	trap.takeDamage(112);

	// Can't attack because he is dead
	trap.attack("Scav");
	trap = DiamondTrap(clap);
	trap.takeDamage(100);
	clap = trap;
	trap.takeDamage(100);

	trap.highFivesGuys();
	trap.guardGate();
	trap.whoAmI();

	DiamondTrap*	test = new DiamondTrap("test");
	test->attack("target");
	delete test;
}
