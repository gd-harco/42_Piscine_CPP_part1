/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:53:22 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/04 12:57:20 by gd-harco         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
private:
	std::string	_name;
};


#endif //ZOMBIE_HPP
