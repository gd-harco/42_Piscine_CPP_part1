/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 13:00:54 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

LMateria	*g_List;

int main(void) {
	Character	*Cloud = new Character("Cloud");
	g_List = new LMateria;
	g_List->current = NULL;
	g_List->next = NULL;

	Ice		*iceSword = new Ice();
	Cure	*healStick = new Cure();
	Ice		*iceGauntlet = new Ice();


	LMateriaAddBack(iceSword);
	LMateriaAddBack(healStick);
	LMateriaAddBack(iceGauntlet);
	Cloud->equip(healStick);
	Cloud->equip(iceSword);
	Cloud->unequip(2);
	LMateriaFree();
	delete Cloud;
}
