/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 20:39:24 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/06 15:16:57 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv) {
	std::string	no_input = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (argc == 1) {
		std::cout << no_input << std::endl;
		return (0);}
	std::size_t i=0;
	std::string	input;
	while (argv[++i])
		input += argv[i];
	std::size_t	len = input.size();
	std::string	output;
	for (i=0; i < len; i++)
		output.push_back(toupper(input.operator[](i)));
	std::cout << output << std::endl;
	return (0);
}
