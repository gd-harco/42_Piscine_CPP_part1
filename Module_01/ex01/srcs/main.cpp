/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:49:28 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/13 17:50:21 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
static std::string	getInput();
static void			quit(Zombie *horde);

int main(void){
	int	nb;
	int	hordeSize;
	std::string	baseName;
	std::string	input;
	Zombie* horde;

	std::cout << "enter the size of the horde:" << std::endl;
	hordeSize = std::atoi(getInput().c_str());
	std::cout << "enter the base name:" << std::endl;
	baseName = getInput();
	horde = zombieHorde(hordeSize, baseName);
	std::cout << "Enter the number of the zombie to call, ALL to call the horde, EXIT to quit" << std::endl;
	std::getline(std::cin, input);
	if (!std::cin)
		quit(horde);
	while (input.compare("EXIT") != 0)
	{
		if (input.compare("ALL") == 0)
			callHorde(horde, hordeSize);
		else
		{
			nb = std::atoi(input.c_str());
			if (nb <= 0)
				std::cout << "Please enter a valid number" << std::endl;
			else if (nb > hordeSize)
				std::cout << "This Zombie isn't part of the horde" << std::endl;
			else
				horde[nb -1 ].announce();
		}
		std::cout << "Enter the number of the zombie to call, ALL to call the horde, EXIT to quit" << std::endl;
		std::getline(std::cin, input);
		if (!std::cin)
			quit(horde);
	}
	quit(horde);
}

static std::string	getInput(){
	std::string input;

	std::getline(std::cin, input);
	if (!std::cin)
	{
		std::cout << "STOP CLOSIN CIN YOU IDIOT!" << std::endl;
		quit(NULL);
	}
	return (input);
}

void	quit(Zombie *horde){
	if (horde)
		delete[] horde;
	exit(0) ;
}
