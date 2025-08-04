/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:41:04 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:37:12 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal (){

	std::cout << "Default Cat constructor called." << std::endl;
	_type = "Cat";
	this->_Brain = new Brain;
}

Cat::Cat( const Cat &other ): Animal ( other ){

	std::cout << "Cat copy constructor called." << std::endl;
	this->_type = other._type;
	this->_Brain = new Brain(*other._Brain);
}

Cat	&Cat::operator=( const Cat &other ){

	std::cout << "Cat assignment constructor called." << std::endl;
	if (this != &other){
		this->_type = other._type;
		delete this->_Brain;
		this->_Brain = new Brain(*other._Brain);
		std::cout << "Lobotomy complete" << std::endl;
	}
	return *this;
}

Cat::~Cat (){

	std::cout << "Cat default destructor called." << std::endl;
	delete this->_Brain;
}

void Cat::makeSound() const{

	std::cout << "Meow..." << std::endl;
}

void	Cat::getIdeas() const{

	for (int i = 0; i < 100; i++)
	{
		if (_Brain->checkIdeas(i))
		{
			std::cout << "Idea number " << i + 1 << std::endl;
			std::cout << _Brain->getIdeas(i) << std::endl;
		}
	}
}

void Cat::indoctrinate ( std::string idea, int i){

	this->_Brain->setIdeas(idea, i);
}