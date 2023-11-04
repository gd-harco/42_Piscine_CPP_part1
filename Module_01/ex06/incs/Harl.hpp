/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:20:38 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/19 16:20:38 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string>


class Harl
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);
public:
	void	complain(std::string level);
};


#endif //HARL_HPP
