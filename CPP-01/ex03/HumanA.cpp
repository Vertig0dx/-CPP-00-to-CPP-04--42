/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:50:21 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/26 16:21:27 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA	( 	std::string name,
				Weapon &weapon ) : _name(name), _weapon(weapon){

	//_name = name;
	//_weapon = weapon;
};

HumanA::~HumanA ( void ){

}; 

void HumanA::attack( void ){

	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
};
