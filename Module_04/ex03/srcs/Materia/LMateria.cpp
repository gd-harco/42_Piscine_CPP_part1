/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LMateria.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:41:58 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/09 16:19:00 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "header.hpp"

LMateria	*newLMateria(AMateria *content) {
	LMateria	*newLMateria = new LMateria;
	newLMateria->current = content;
	newLMateria->next = NULL;
	return newLMateria;
}

void	LMateriaAddBack(LMateria **list, LMateria *toAdd) {
	LMateria	*current;

	if (!list)
		return;
	current = *list;
	while (current && current->next)
		current = current->next;
	current->next = toAdd;
}

void	LMateriaRemove(LMateria **list, AMateria *toRemove) {
	LMateria	*current = *list;

	while (current && current->current != toRemove)
		current = current->next;
	if (!current){
		std::cout << "Materia not in the list" << std::endl;
		return;
	}
	delete current->current;
	current = current->next;
}

void LMateriaFree(LMateria **list){
	LMateria	*current = *list;
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
