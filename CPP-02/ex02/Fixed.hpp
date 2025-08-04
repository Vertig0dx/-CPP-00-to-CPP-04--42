/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:39:47 by lmiguel-          #+#    #+#             */
/*   Updated: 2025/01/14 18:23:06 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{

	public:

	Fixed								( void );
	Fixed								( const int value );
	Fixed								( const float value);
	Fixed								( const Fixed &other );
	~Fixed								( void );
	Fixed	&operator=					( const Fixed &other );

	int		toInt						( void )const;
	int		getRawBits					( void )const;
	void	setRawBits					( const int raw );
	float	toFloat						( void )const;
	
	Fixed	operator+( const Fixed &number )const;
	Fixed	operator-( const Fixed &number )const;
	Fixed	operator/( const Fixed &number )const;
	Fixed	operator*( const Fixed &number )const;
	
	bool	operator>( const Fixed &number )const;
	bool	operator<( const Fixed &number )const;
	bool	operator>=( const Fixed &number )const;
	bool	operator<=( const Fixed &number )const;
	bool	operator==( const Fixed &number )const;
	bool	operator!=( const Fixed &number )const;
	
	Fixed	&operator++();			//++fixedNumber
	Fixed	operator++( int );		//fixedNumber++
	Fixed	&operator--();			//--fixedNumber
	Fixed	operator--( int );		//fixedNumber--

	static	const	Fixed	&min		( const Fixed &n1, const Fixed &n2 );
	static	const	Fixed	&max		( const Fixed &n1, const Fixed &n2 );

	private:

	int						_fixedValue;
	static	const int		_fractionalBits = 8;

};

std::ostream &operator<<( std::ostream &out, const Fixed &fixedNumber );
const	Fixed	&min	( const Fixed &n1, const Fixed &n2 );
const	Fixed	&max	( const Fixed &n1, const Fixed &n2 );


#endif