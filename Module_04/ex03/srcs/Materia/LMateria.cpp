/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LMateria.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:41:58 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 13:01:13 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "LMateria.hpp"

extern LMateria *g_List;

//do not use if Materia not asllocated on the heap
LMateria	*newLMateria(AMateria *content) {
	LMateria	*newLMateria = new LMateria;
	newLMateria->current = content;
	newLMateria->next = NULL;
	return newLMateria;
}

void	LMateriaAddBack(AMateria *toAdd) {
	if (!g_List)
		return;
	LMateria	*current = g_List;
	LMateria	*LtoAdd = newLMateria(toAdd);
	while (current && current->next)
		current = current->next;
	if (current->current == NULL) {
		delete current;
		g_List = LtoAdd;
	}
	else
		current->next = LtoAdd;
}

void	LMateriaRemove(AMateria *toRemove) {
	LMateria	*current = g_List;
	LMateria	*previous = NULL;
	LMateria	*next = NULL;

	while (current && current->current != toRemove) {
		previous = current;
		current = current->next;
	}
	if (!current){
		std::cout << "Materia not in the list" << std::endl;
		return;
	}
	next = current->next;
	delete current;
	if (!previous)
		g_List = next;
	else
		previous->next = next;
}

void LMateriaFree(){
	if (!g_List)
		return;
	LMateria	*current = g_List;
	LMateria	*next = current->next;

	while (next) {
		delete current->current;
		delete current;
		current = next;
		next = current->next;
	}
	delete current->current;
	delete current;
}
