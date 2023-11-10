/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:26:45 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/10 12:58:51 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LMATERIA_HPP
#define LMATERIA_HPP



struct LMateria {
	AMateria		*current;
	struct LMateria	*next;
};

LMateria	*newLMateria(AMateria *content);
void		LMateriaAddBack(AMateria *toAdd);
void		LMateriaRemove(AMateria *toRemove);
void		LMateriaFree();

#endif//LMATERIA_HPP
