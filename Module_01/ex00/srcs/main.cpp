/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:49:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/04 13:03:00 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(void) {
	Zombie* heapZombie;

	std::cout << "Creating a zombie on the heap, using newZombie(std::string name)" << std::endl;
	heapZombie = newZombie("heap");
	std::cout << "Now creating one on the stack using randomChump(std::string name)" << std::endl;
	randomChump("Random");
	std::cout << "Random has been created, announced, than deleted" << std::endl;
	std::cout << "Now calling heap" << std::endl;
	heapZombie->announce();
	std::cout << "Exiting properly" << std::endl;
	delete heapZombie;
	return 0;
}
