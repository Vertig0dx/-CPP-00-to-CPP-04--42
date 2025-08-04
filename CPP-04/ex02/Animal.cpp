/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:40:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:37:02 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

A_Animal::A_Animal(){

	std::cout << "Default A_Animal constructor called." << std::endl;
	_type = "A_Animal";
}

A_Animal::A_Animal	( const A_Animal &other ){

	std::cout << "A_Animal copy constructor called." << std::endl;
	_type = other._type;
}

A_Animal	&A_Animal::operator=( const A_Animal &other ){

	std::cout << "A_Animal assignment constructor called." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

A_Animal::~A_Animal (){

	std::cout << "A_Animal default destructor called." << std::endl;
}

void A_Animal::makeSound() const{

	std::cout << "A_Animal sounds." << std::endl;
}

void A_Animal::getType() const{

	std::cout << "Type = " << this->_type << std::endl;
}

void	A_Animal::getIdeas() const{

	std::cout << "If this is showing up, you messed up, because I am not virtual... (A_Animal.GETIDEAS)\n" << std::endl;
}

void A_Animal::indoctrinate ( std::string idea , int i){

	std::cout << "If this is showing up, you messed up, because I am not virtual... (A_Animal.INDOCTRINATE)\n" << std::endl;
	idea = "\0";
	i = 0;
}