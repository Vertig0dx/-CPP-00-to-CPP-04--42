/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:41:31 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/12 14:16:14 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>


class Harl{

	public:

	Harl	( void );
	~Harl	( void );
	void complain	( std::string level );

	private:

	void _debug		( void );
	void _info		( void );
	void _warning	( void );
	void _error		( void );

};

typedef void (Harl::*ptrToFunc)( void );

#endif