/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:49:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/04 14:56:25 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
static std::string	getInput(Zombie *horde);
static void			quit(Zombie *horde);
static Zombie		*createHorde(int &hordeSize);	//on envoie une reference pour que
													//la modif dans la fonction soit
													//effective dans main.

int main(void) {
	int			nb;
	int			hordeSize = 0;
	std::string	input;
	Zombie*		horde;

	horde = createHorde(hordeSize);
	std::cout << "Enter the number of the zombie to call, ALL to call the horde, EXIT to quit" << std::endl;
	input = getInput(horde);
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ALL") == 0)
			callHorde(horde, hordeSize);
		else
		{
			nb = std::atoi(input.c_str());
			if (nb <= 0)
				std::cout << "Please enter a positive value" << std::endl;
			else if (nb > hordeSize)
				std::cout << "This Zombie isn't part of the horde" << std::endl;
			else
				horde[nb -1 ].announce();
		}
		std::cout << "Enter the number of the zombie to call, ALL to call the horde, EXIT to quit" << std::endl;
		input = getInput(horde);
	}
	quit(horde);
}

static std::string	getInput(Zombie *horde) {
	std::string input;

	std::getline(std::cin, input);
	if (!std::cin)
	{
		std::cout << "STOP CLOSIN CIN YOU IDIOT!" << std::endl;
		quit(horde);
	}
	return (input);
}

void	quit(Zombie *horde) {
	if (horde)
		delete[] horde;
	exit(0) ;
}

static Zombie	*createHorde(int &hordeSize) {
	std::string	baseName;

	std::cout << "enter the size of the horde:" << std::endl;
	hordeSize = std::atoi(getInput(NULL).c_str());
	while (hordeSize <= 0) {
		std::cout << "Please enter a positive value" << std::endl;
		hordeSize = std::atoi(getInput(NULL).c_str());
	}
	std::cout << "enter the base name:" << std::endl;
	baseName = getInput(NULL);
	return (zombieHorde(hordeSize, baseName));
}
