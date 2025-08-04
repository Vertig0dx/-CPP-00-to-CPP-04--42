/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:12:17 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 17:30:46 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){

	this->_hp = 100;
	this->_stamina = 100;
	this->_attackPower = 30;
	std::cout << "Default FragTrap reporting for duty." << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name ){

	this->_hp = 100;
	this->_stamina = 100;
	this->_attackPower = 30;
	std::cout << "Named FragTrap reporting for duty." << std::endl;
}

FragTrap::FragTrap	( const FragTrap &other ): ClapTrap( other ){

	this->_name = other._name;
	this->_hp = other._hp;
	this->_stamina = other._stamina;
	this->_attackPower = other._attackPower;
	std::cout << "Clone FragTrap reporting for duty." << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &other ){

	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_stamina = other._stamina;
		this->_attackPower = other._attackPower;
	}
	std::cout << "Orders received, sir. (FragTrap assignment operator)" << std::endl;
	return *this;
}

FragTrap::~FragTrap (){

	std::cout << "Dismissed! (FragTrap destructor)" << std::endl;
}

void FragTrap::highFivesGuys(void){

	std::cout << "High Five! ... Anyone?" << std::endl;
	std::cout << "FragTrap " << this->_name << " is now waiting for a High Five." << std::endl;
}
