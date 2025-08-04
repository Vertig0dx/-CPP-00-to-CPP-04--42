/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:59:57 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:03:21 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main (void){

	{
	std::cout << std::endl;
	std::cout << "-----ANIMAL ARRAY TESTING COMENCING-----" << std::endl;
	std::cout << std::endl;

	Animal *Animals [6];
	
	for(int i = 0; i < 6; i++){

		if (i % 2)
		{
			Animals[i] = new Dog();
			std::cout << "Animal number: " << i + 1 << std::endl;
			Animals[i]->getType();
			Animals[i]->makeSound();
			Animals[i]->indoctrinate ("Snacks\n", 1);
			Animals[i]->getIdeas();
		}
		else
		{
			Animals[i] = new Cat();
			std::cout << "Animal number: " << i + 1 << std::endl;
			Animals[i]->getType();
			Animals[i]->makeSound();
			Animals[i]->indoctrinate ("Fish\n", 1);
			Animals[i]->getIdeas();
		}
	}	
	for (int i = 0; i < 6; i++)
		delete Animals[i];
	std::cout << std::endl;
	std::cout << "-----ANIMAL ARRAY TESTING FINISHED-----" << std::endl;
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "-----ANIMAL CONSTRUCTOR AND DESTRUCTOR TESTING COMENCING-----" << std::endl;
	std::cout << std::endl;

	//DOG DEEP COPY TESTING, COPY CONSTRUCTORS AND OPERATOR OVERLOAD
	Dog *NewAnimal1 = new Dog;
	NewAnimal1->indoctrinate("I am a test subject.", 10);
	NewAnimal1->getIdeas();
	Dog NewAnimal2;
	NewAnimal2.indoctrinate("I am my own self.", 1);
	NewAnimal2.getIdeas();
	NewAnimal2 = *NewAnimal1;
	Dog NewAnimal3 (*NewAnimal1);
	NewAnimal3.getIdeas();
	NewAnimal2.getIdeas();
	delete NewAnimal1;
	NewAnimal2.indoctrinate("I am another test subject.", 20);
	NewAnimal2.getIdeas();

	std::cout << std::endl;

	//CAT DEEP COPY TESTING, COPY CONSTRUCTORS AND OPERATOR OVERLOAD
	Cat *NewAnimal4 = new Cat;
	NewAnimal4->indoctrinate("I am a test subject.", 40);
	NewAnimal4->getIdeas();
	Cat NewAnimal5;
	NewAnimal5.indoctrinate("I am my own self.", 4);
	NewAnimal5.getIdeas();
	NewAnimal5 = *NewAnimal4;
	Cat NewAnimal6 (*NewAnimal4);
	NewAnimal6.getIdeas();
	NewAnimal5.getIdeas();
	delete NewAnimal4;
	NewAnimal5.indoctrinate("I am another test subject.", 50);
	NewAnimal5.getIdeas();
	
	std::cout << std::endl;
	std::cout << "-----ANIMAL CONSTRUCTOR AND DESTRUCTOR TESTING FINISHED-----" << std::endl;
	std::cout << std::endl;
	}
	return (0);
}