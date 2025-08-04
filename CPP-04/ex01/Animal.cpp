/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:40:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 14:19:03 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){

	_type = "Animal";
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal	( const Animal &other ){

	std::cout << "Animal copy constructor called." << std::endl;
	_type = other._type;
}

Animal	&Animal::operator=( const Animal &other ){

	std::cout << "Animal assignment constructor called." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

Animal::~Animal (){

	std::cout << "Animal default destructor called." << std::endl;
}

void Animal::makeSound() const{

	std::cout << "Animal sounds." << std::endl;
}

void Animal::getType() const{

	std::cout << "Type = " << this->_type << std::endl;
}

void	Animal::getIdeas() const{

	std::cout << "If this is showing up, you messed up, because I am not virtual... (ANIMAL.GETIDEAS)\n" << std::endl;
}

void Animal::indoctrinate ( std::string idea , int i){

	std::cout << "If this is showing up, you messed up, because I am not virtual... (ANIMAL.INDOCTRINATE)\n" << std::endl;
	idea = "\0";
	i = 0;
}