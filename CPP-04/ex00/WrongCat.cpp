/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:33:47 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:33:48 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){

	_type = "WrongCat";
	std::cout << "Default WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat( const WrongCat &other ){

	_type = other._type;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat	&WrongCat::operator=( const WrongCat &other ){

	if (this != &other)
		_type = other._type;
	std::cout << "WrongCat assignment constructor called." << std::endl;
	return *this;
}

WrongCat::~WrongCat (){

	std::cout << "WrongCat default destructor called." << std::endl;
}

void WrongCat::makeSound() const{

	std::cout << "Meow..." << std::endl;
}