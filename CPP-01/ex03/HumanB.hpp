/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:50:10 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/13 19:11:32 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>

class HumanB{

	public:

	HumanB				( void );
	HumanB				( 	std::string name );
	~HumanB				( void );
	void	setWeapon	( Weapon &type);
	void	attack		( void );

	private:

	std::string		_name;
	Weapon			*_weapon;

};