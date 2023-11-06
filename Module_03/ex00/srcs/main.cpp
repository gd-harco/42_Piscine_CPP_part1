/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/31 19:02:05 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	continuousAttack(ClapTrap &toTest);

int main() {
	{
		// Test constructor and attack()
		ClapTrap ct1("Clap1");
		ct1.attack("Target");

		// Test copy constructor
		ClapTrap ct2(ct1);
		ct2.attack("Target");

		// Test assignment operator
		ClapTrap ct3("Clap3");
		ct3 = ct1;
		ct3.attack("Target");
	}
	{
		// Test takeDamage() and beRepaired()
		ClapTrap ct1("Value Test");

		ct1.printStat();
		ct1.takeDamage(3);
		ct1.printStat();
		ct1.beRepaired(2);
		ct1.printStat();
		ct1.attack("Target");
		ct1.printStat();

		// Test death
		ct1.takeDamage(10);
		ct1.printStat();
		ct1.attack("Shouldn't should be dead");
	}
	ClapTrap test("noEnergy");
	continuousAttack(test);
	test.printStat();
	test.attack("test2");
	return 0;
}

void	continuousAttack(ClapTrap &toTest) {
	while (toTest.get_ep() > 0)
		toTest.attack("target");
}
