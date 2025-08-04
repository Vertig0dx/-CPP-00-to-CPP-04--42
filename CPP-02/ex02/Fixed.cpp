/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:37:20 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/09 14:28:29 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "cmath"

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

Fixed	Fixed::operator+( const Fixed &number )const{

	Fixed	finalNumber;
	
	finalNumber.setRawBits(getRawBits() + number.getRawBits());
	return finalNumber;
}

Fixed	Fixed::operator-( const Fixed &number )const{

	Fixed	finalNumber;
	
	finalNumber.setRawBits(getRawBits() - number.getRawBits());
	return finalNumber;
}

Fixed	Fixed::operator/( const Fixed &number )const{

	Fixed	finalNumber;
	
	finalNumber.setRawBits((getRawBits() << _fractionalBits) / number.getRawBits());
	return finalNumber;
}

Fixed	Fixed::operator*( const Fixed &number )const{

	Fixed	finalNumber;
	
	finalNumber.setRawBits(getRawBits() * number.getRawBits() >> _fractionalBits);
	return finalNumber;
}

float	Fixed::toFloat( void )const{

	return (( float ) _fixedValue / ( float )(1 << _fractionalBits));
}

bool	Fixed::operator>( const Fixed &number )const{

	return getRawBits() > number.getRawBits();
}

bool	Fixed::operator<( const Fixed &number )const{

	return getRawBits() < number.getRawBits();
}

bool	Fixed::operator>=( const Fixed &number )const{

	return getRawBits() >= number.getRawBits();
}

bool	Fixed::operator<=( const Fixed &number )const{

	return getRawBits() <= number.getRawBits();
}

bool	Fixed::operator==( const Fixed &number )const{

	return getRawBits() == number.getRawBits();
}

bool	Fixed::operator!=( const Fixed &number )const{

	return getRawBits() != number.getRawBits();
}

Fixed	Fixed::operator++( int ){

	Fixed	finalNumber(*this);
	operator++();
	return finalNumber;
}	//fixedNumber++

Fixed	&Fixed::operator++(){

	_fixedValue++;
	return *this;
}	//++fixedNumber

Fixed	Fixed::operator--( int ){

	Fixed finalNumber(*this);
	operator--();
	return finalNumber;
}	//fixedNumber--

Fixed	&Fixed::operator--(){

	_fixedValue--;
	return *this;
}	//--fixedNumber

const	Fixed	&Fixed::min( const Fixed &n1, const Fixed &n2 ){

	return n1 < n2 ? n1 : n2;
}
const	Fixed	&Fixed::max( const Fixed &n1, const Fixed &n2 ){

	return n1 > n2 ? n1 : n2;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixedNumber){

	out << fixedNumber.toFloat();
	return (out);
}

const	Fixed	&min( const Fixed &n1, const Fixed &n2 ){

	return Fixed::min(n1, n2);
}

const	Fixed	&max( const Fixed &n1, const Fixed &n2 ){

	return Fixed::max(n1, n2);
}
