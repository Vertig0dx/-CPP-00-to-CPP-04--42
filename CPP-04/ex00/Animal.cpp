/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:40:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:25:08 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){

	_type = "Animal";
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal	( const Animal &other ){

	_type = other._type;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal	&Animal::operator=( const Animal &other ){

	if (this != &other)
		_type = other._type;
	std::cout << "Animal assignment constructor called." << std::endl;
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