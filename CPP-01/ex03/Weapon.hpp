/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:49:44 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/08 15:12:47 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>

class Weapon{

	public:

	Weapon							( void );
	Weapon							( std::string );
	~Weapon							( void );
	const std::string	&getType	()const;
	void				setType		( std::string );

	private:

	std::string _type;

};

#endif