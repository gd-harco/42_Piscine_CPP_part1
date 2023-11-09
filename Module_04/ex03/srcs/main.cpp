/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 11:16:22 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void) {
	Character	Cloud("Cloud");
	AMateria	*MateriaList[5];

	MateriaList[0] = new Ice;
	MateriaList[1] = new Cure;
	MateriaList[2] = new Ice;
	MateriaList[3] = new Cure;
	MateriaList[4] = new Cure;

	for (int i=0; i<5; i++)
		Cloud.equip(MateriaList[i]);

	for (int i=0; i < 5; i++)
		delete MateriaList[i];
}
