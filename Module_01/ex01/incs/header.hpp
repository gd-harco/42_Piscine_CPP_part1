/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:34:37 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/14 13:53:43 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

# include "Zombie.hpp"
# include <stdlib.h>
# include <cstdlib>

Zombie*	newZombie(std::string name);
Zombie*	zombieHorde(int N, std::string name);
void	callHorde(Zombie *horde, int hordeSize);

#endif //HEADER_HPP
