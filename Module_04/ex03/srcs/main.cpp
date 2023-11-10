/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 15:01:26 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

LMateria	*g_List;

int main(void) {
	Character	*Cloud = new Character("Cloud");
	Character	*Aerith = new Character("Aerith");
	g_List = new LMateria;
	g_List->current = NULL;
	g_List->next = NULL;

	Ice		*iceSword = new Ice();
	Cure	*healStick = new Cure();
	Ice		*iceGauntlet = new Ice();


	LMateriaAddBack(iceSword);
	LMateriaAddBack(healStick);
	LMateriaAddBack(iceGauntlet);
	Cloud->equip(iceSword);
	Cloud->equip(iceSword);
	Aerith->equip(healStick);
	Cloud->equip(healStick);
	LMateriaFree();
	delete Cloud;
}
