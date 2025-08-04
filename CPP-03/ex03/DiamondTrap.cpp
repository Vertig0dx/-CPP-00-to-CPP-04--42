/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:33:17 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 17:00:15 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap ( ), FragTrap( ), ScavTrap ( ){

	_hp = 100;
	_stamina = 100;
	_attackPower = 0;
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ):ClapTrap (name + "_clap_name"), FragTrap( name ), ScavTrap ( name ){

	this->_name = name;
	std::cout << "Default DiamondTrap named constructor called." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ): ClapTrap ( other), FragTrap( other ), ScavTrap ( other ){

	this->_name = other._name + "_clap_name";
	this->_hp = other._hp;
	this->_stamina = other._stamina;
	this->_attackPower = other._attackPower;
	std::cout << "DiamondTrap copy constructor called." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &other ){

	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_stamina = other._stamina;
		this->_attackPower = other._attackPower;
	}
	std::cout << "DiamondTrap assignment constructor called." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap (){

	std::cout << "DiamondTrap default destructor called." << std::endl;
}

void	DiamondTrap::attack( const std::string &target){

	ScavTrap::attack ( target );
}

void	DiamondTrap::getHp( void ){

		std::cout << FragTrap::_hp << std::endl;
		std::cout << ScavTrap::_hp << std::endl;
		std::cout << ClapTrap::_hp << std::endl;
}

void	DiamondTrap::whoAmI( void ){

	std::cout << "My DiamondTrap name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}