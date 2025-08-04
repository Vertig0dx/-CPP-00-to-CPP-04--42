/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:41:04 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:26:22 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){

	_type = "Cat";
	std::cout << "Default Cat constructor called." << std::endl;
}

Cat::Cat( const Cat &other ){

	_type = other._type;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat	&Cat::operator=( const Cat &other ){

	if (this != &other)
		_type = other._type;
	std::cout << "Cat assignment constructor called." << std::endl;
	return *this;
}

Cat::~Cat (){

	std::cout << "Cat default destructor called." << std::endl;
}

void Cat::makeSound() const{

	std::cout << "Meow..." << std::endl;
}