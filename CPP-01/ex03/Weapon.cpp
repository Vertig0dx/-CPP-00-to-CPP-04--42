/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:49:03 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/08 15:12:44 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ){

};

Weapon::Weapon( std::string type ){

	_type = type;
};

Weapon::~Weapon( void ){

};

const std::string &Weapon::getType()const{

	return (_type);
};

void	Weapon::setType	( std::string newType ){

	_type = newType;
};

