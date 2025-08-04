/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:37:20 by lmiguel-          #+#    #+#             */
/*   Updated: 2025/03/25 15:05:40 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fixedValue(0){

	
}

Fixed::~Fixed(){

	
}

Fixed::Fixed( const Fixed &other ){

	*this = other;
}

Fixed::Fixed( const int number ){

	_fixedValue = number << _fractionalBits;
}

Fixed::Fixed( const float number ){

	_fixedValue = ( int )roundf(number * (1 << _fractionalBits));
}

Fixed	&Fixed::operator= ( const Fixed &other ){

	if (this != &other)
		_fixedValue = other.getRawBits();
	return *this;
}

int	Fixed::toInt( void )const{

	return ( int )_fixedValue >> _fractionalBits;
}

int	Fixed::getRawBits( void )const{

	return (_fixedValue);
}

void	Fixed::setRawBits( const int raw ){

	_fixedValue = raw;
}


float	Fixed::toFloat( void )const{

	return (( float ) _fixedValue / ( float )(1 << _fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixedNumber){

	out << fixedNumber.toFloat();
	return (out);
}
