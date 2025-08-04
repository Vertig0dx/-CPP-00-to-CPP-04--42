/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:59:57 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/09 14:44:28 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main (void){

	{
	std::cout << std::endl;
	std::cout << "-----DEFAULT ANIMAL TESTING COMENCING-----" << std::endl;
	std::cout << std::endl;
	const Animal*	DefaultAnimal = new Animal();
	const Animal*	DefaultCat = new Cat();
	const Animal*	DefaultDog = new Dog();

	DefaultAnimal->makeSound();
	DefaultCat->makeSound();
	DefaultDog->makeSound();
	
	DefaultAnimal->getType();
	DefaultCat->getType();
	DefaultDog->getType();

	delete DefaultAnimal;
	delete DefaultCat;
	delete DefaultDog;
	std::cout << std::endl;
	std::cout << "-----DEFAULT ANIMAL TESTING FINISHED-----" << std::endl;
	std::cout << std::endl;
	}
	{
	std::cout << std::endl;
	std::cout << "-----WRONG ANIMAL TESTING COMENCING-----" << std::endl;
	std::cout << std::endl;
	const WrongAnimal*	DefaultWrongAnimal = new WrongAnimal();
	const WrongAnimal*	DefaultWrongCat = new WrongCat();

	DefaultWrongAnimal->makeSound();
	DefaultWrongCat->makeSound();
	
	DefaultWrongAnimal->getType();
	DefaultWrongCat->getType();

	delete DefaultWrongAnimal;
	delete DefaultWrongCat;
	std::cout << std::endl;
	std::cout << "-----WRONG ANIMAL TESTING FINISHED-----" << std::endl;
	std::cout << std::endl;
	}
	return (0);
}