/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:31:33 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/14 14:08:43 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie* horde = new Zombie[N];
	std::string zName;
	std::string att[2] = {"even", "odd"};
	for (int i=0; i < N; i++)
	{
		zName = name + "_" + att[i % 2];
		horde[i].set(zName, i);
	};
	return (horde);
}

void	callHorde(Zombie *horde, int hordeSize){
	int	i = -1;

	while (++i < hordeSize)
		horde[i].announce();
}
