/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:37:20 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/13 13:22:23 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedValue(0){

	
}

Fixed::~Fixed(){

	
}

Fixed::Fixed( const Fixed &other){

	*this = other;
}

Fixed	&Fixed::operator= (const Fixed &other){

	if (this != &other)
		_fixedValue = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void)const{

	return (_fixedValue);
}

void	Fixed::setRawBits(const int raw){

	_fixedValue = raw;
}
