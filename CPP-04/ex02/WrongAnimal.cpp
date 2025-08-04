/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:31:03 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:31:45 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){

	_type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal	( const WrongAnimal &other ){

	_type = other._type;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &other ){

	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal assignment constructor called." << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal (){

	std::cout << "WrongAnimal default destructor called." << std::endl;
}

void WrongAnimal::makeSound() const{

	std::cout << "WrongAnimal sounds." << std::endl;
}

void WrongAnimal::getType() const{

	std::cout << "Type = " << this->_type << std::endl;
}