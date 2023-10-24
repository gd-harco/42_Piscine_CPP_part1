/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:44:42 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/24 14:44:42 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	// Test constructor, destructor, and attack()
	ClapTrap ct1("Clap1");

	ct1.attack("Target");

	// Test copy constructor
	ClapTrap ct2(ct1);
	ct2.attack("Target");

	// Test assignment operator
	ClapTrap ct3("Clap3");
	ct3 = ct1;
	ct3.attack("Target");

	// Test takeDamage() and beRepaired()
	ct1.takeDamage(3);
	ct1.beRepaired(2);

	return 0;
}
