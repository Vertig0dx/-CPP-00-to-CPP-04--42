/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:54:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:27:36 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){

	std::cout << "Default Dog constructor called." << std::endl;
	this->_type = "Dog";
	this->_Brain = new Brain;
}

Dog::Dog( const Dog &other ): Animal( other ){

	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = other._type;
	this->_Brain = new Brain(*other._Brain);
}

Dog	&Dog::operator=( const Dog &other ){

	std::cout << "Dog assignment constructor called." << std::endl;
	if (this != &other){
		this->_type = other._type;
		delete _Brain;
		this->_Brain = new Brain(*other._Brain);
		std::cout << "Lobotomy complete" << std::endl;
	}
	return *this;
}

Dog::~Dog (){

	std::cout << "Dog default destructor called." << std::endl;
	delete this->_Brain;
}

void Dog::makeSound() const{

	std::cout << "Bark! Bark!" << std::endl;
}

void	Dog::getIdeas() const{

	for (int i = 0; i < 100; i++)
	{
		if (_Brain->checkIdeas(i))
		{
			std::cout << "Idea number " << i + 1 << std::endl;
			std::cout << _Brain->getIdeas(i) << std::endl;
		}
	}
}

void Dog::indoctrinate ( std::string idea, int i){

	std::cout << "Indoctrinating idea '" << idea << "' at index " << i << std::endl;
	this->_Brain->setIdeas(idea, i);
}
