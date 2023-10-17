/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
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

//class Bonjour {
//private:
//	int	_i;
//
//public:
//	Bonjour(int i): _i(i) {}
//
//	Bonjour&	operator+(const Bonjour&&)
//};
//
//int main() {
//	Bonjour bonjour(5);
//	Bonjour bonsoir(10);
//
//	Bonjour bonneNuit = bonjour + bonsoir;
//}

int main(int argc, char **argv){
	if (argc  != 4){
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}

	std::string		fileInPath = argv[1];
	std::string		fileInContent;
	std::string		fileOutPath = fileInPath + ".replace";
	std::string		toLook = argv[2];
	std::string		toReplace = argv[3];
	std::ifstream	input;
	std::ofstream	output;

	input.open(fileInPath.c_str());
	if (input.fail())
	{
		std::cout << "Error opening file " << fileInPath << std::endl;
		return (1);
	}

	input >> fileInContent;
	input.close();
	output.open(fileOutPath.c_str());
	output << fileInContent.substr(0, fileInContent.find(toLook));
}
