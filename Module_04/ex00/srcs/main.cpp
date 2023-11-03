/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 11:59:12 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void) {
	const Animal* meta = new Animal();
	const Dog* j = new Dog();
	const Cat* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongCat* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();
	delete wrongI;
	delete wrongMeta;
	return 0;
}
