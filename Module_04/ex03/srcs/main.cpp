/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 16:20:09 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void) {
	Character	*Cloud = new Character("Cloud");
	LMateria	*List;

	List = new LMateria;

	Ice		iceSword;
	Cure	healStick;
	Ice		iceGauntlet;

	LMateriaAddBack(&List, newLMateria(&iceSword));
	LMateriaAddBack(&List, newLMateria(&healStick));
	LMateriaAddBack(&List, newLMateria(&iceGauntlet));
	Cloud->equip(&healStick);
	LMateriaRemove(&List, &healStick);
	LMateriaFree(&List);
	delete Cloud;
}
