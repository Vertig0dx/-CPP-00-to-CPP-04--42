/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:50:30 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/08 16:42:18 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB ( void ){

}

HumanB::HumanB	( std::string name ){

	_name = name;
}

void HumanB::setWeapon ( Weapon &type ){

	_weapon = &type;
}

HumanB::~HumanB ( void ){

}

void HumanB::attack( void ){

	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}
