/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:54:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:26:06 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){

	_type = "Dog";
	std::cout << "Default Dog constructor called." << std::endl;
}

Dog::Dog( const Dog &other ){

	_type = other._type;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog	&Dog::operator=( const Dog &other ){

	if (this != &other)
		_type = other._type;
	std::cout << "Dog assignment constructor called." << std::endl;
	return *this;
}

Dog::~Dog (){

	std::cout << "Dog default destructor called." << std::endl;
}

void Dog::makeSound() const{

	std::cout << "Bark! Bark!" << std::endl;
}