/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:39:47 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/12 17:00:28 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{

	public:

	Fixed				( void );
	Fixed				( const Fixed &other );
	Fixed	&operator=	(const Fixed &other);
	~Fixed				( void );
	int		getRawBits	( void )const;
	void	setRawBits	( const int raw);

	private:

	int						_fixedValue;
	static	const int		_fractionalBits = 8;

};

#endif