/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:15:11 by gd-harco          #+#    #+#             */
/*   Updated: 2023/11/03 17:53:00 by gd-harco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void) {
	{
		int size = 2;
		Animal *array[size];
		for (int i = 0; i < size; i++)
		{
			if (i % 2)
				array[i] = new Cat();
			else
				array[i] = new Dog();
		}
		array[0]->getType();
		array[1]->getType();
		for (int i = 0; i < size; i++)
			delete array[i];
	}
	{
		Cat testIdeas;
		Cat toCopy;
		std::cout << "printing idea 5 of Cat testIdeas, than setting it and reprinting it" << std::endl;
		testIdeas.printIdea(1);
		testIdeas.setIdea(1);
		testIdeas.printIdea(1);
		std::cout << "printing idea 1 of Cat toCopy, than copying testIdeas in toCopy it and reprinting it" << std::endl;
		toCopy.printIdea(1);
		toCopy = testIdeas;
		toCopy.printIdea(1);
		testIdeas.setIdea(1);
		testIdeas.printIdea(1);
		toCopy.printIdea(1);
	}
}
