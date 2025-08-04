/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:22:58 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/16 14:55:24 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap (){

	this->_hp = 100;
	this->_stamina = 50;
	this->_attackPower = 20;
	std::cout << "Default ScavTrap online, rock and roll guvnor. (ScavTrap default constructor)" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap( name ){

	this->_hp = 100;
	this->_stamina = 50;
	this->_attackPower = 20;
	std::cout << "ScavTrap online, rock and roll guvnor. (ScavTrap named constructor)" << std::endl;
}

ScavTrap::ScavTrap	( const ScavTrap &other ): ClapTrap( other ){

	this->_name = other._name;
	this->_hp = other._hp;
	this->_stamina = other._stamina;
	this->_attackPower = other._attackPower;
	std::cout << "Copy? You can't copy greatness, mate. (ScavTrap copy constructor)" << std::endl;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &other ){

	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_stamina = other._stamina;
		this->_attackPower = other._attackPower;
	}
	std::cout << "Any assignment you give me will be your last. (ScavTrap assignment constructor)" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap (){

	std::cout << "Show's over, I'm leaving. (ScavTrap destructor)" << std::endl;
}

void	ScavTrap::attack( const std::string &target){

	if (this->_hp <= 0){
		std::cout << "ScavTrap " << this->_name << " has no hp left." << std::endl;
		return ;
	}
	if (this->_stamina <= 0){
		std::cout << "ScavTrap " << this->_name << " has no energy left." << std::endl;
		return ;
	}
	this->_stamina--;
	std::cout << "Eat this, tosser!" << std::endl;
	std::cout << "ScavTrap " << this->_name << " blasts " << target << ", dealing " << this->_attackPower << " damage!" << std::endl;
}

void ScavTrap::guardGate(){

	std::cout << "This gate won't fall, boss." << std::endl;
	std::cout << "ScavTrap " << this->_name << " is now in GateKeeper mode." << std::endl;
}