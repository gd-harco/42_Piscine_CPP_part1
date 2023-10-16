/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:56 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/16 16:43:15 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int main(int argc, char **argv){
	if (argc  != 4){
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}

	std::string file = argv[1];
	std::string toLook = argv[2];
	std::string toReplace = argv[3];


}
