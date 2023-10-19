/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:46 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/19 20:22:07 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Usage: ./Harl level\nAvailable level : debug, info, warning or error" << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(argv[1]);
	return (0);
}
