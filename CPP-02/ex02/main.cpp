/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:19:04 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/10 16:01:59 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed c;
	Fixed d;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	c = 10;
	d = 19.10f;
	float x = 1.1f;
	int y = x;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( d, c ) << std::endl;
	std::cout << d + c << std::endl;
	std::cout << d - c << std::endl;
	std::cout << d * c << std::endl;
	std::cout << d / c << std::endl;

	return 0;
}