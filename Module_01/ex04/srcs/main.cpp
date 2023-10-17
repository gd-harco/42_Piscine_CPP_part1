/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:04:56 by gd-harco          #+#    #+#             */
/*   Updated: 2023/10/17 21:36:25 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

static std::string    read_file(std::ifstream &file);

int main(int argc, char **argv){
	if (argc  != 4){
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	std::string		fileInContent;
	std::string		fileOut = std::string(argv[1]) + ".replace";
	std::string		toLook = argv[2];
	std::string		toReplace = argv[3];
	std::ifstream	input;
	std::ofstream	output;
	std::size_t		nextPos;

	input.open(argv[1]);
	if (!input.is_open())
	{
		std::cout << "Error opening file " << argv[1] << std::endl;
		return (1);
	}
	fileInContent = read_file(input);
	input.close();
	output.open(fileOut.c_str());
	if (!output.is_open())
	{
		std::cout << "Error opening file " << fileOut << std::endl;
		return (1);
	}
	nextPos = fileInContent.find(toLook);
	while (nextPos != std::string::npos)
	{
		output << fileInContent.substr(0, nextPos);
		output << toReplace;
		fileInContent = fileInContent.substr(nextPos + toLook.size(), fileInContent.size());
		nextPos = fileInContent.find(toLook);
	}
	output << fileInContent;
	output.close();
	return (0);
}

std::string    read_file(std::ifstream &file) {
	std::stringstream    file_content;

	file_content << file.rdbuf();
	return (file_content.str());
}
