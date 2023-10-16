/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:53:22 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/14 14:01:02 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	set(std::string name, int index);
private:
	std::string	_name;
	int			_id;
};


#endif //ZOMBIE_HPP
