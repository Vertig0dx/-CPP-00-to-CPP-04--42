/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:15:11 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/16 14:55:53 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

	_hp = 10;
	_stamina = 10;
	_attackPower = 0;
	std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap( std::string name ){

	_name = name;
	_hp = 10;
	_stamina = 10;
	_attackPower = 0;
	std::cout << "Named ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap	( const ClapTrap &other ){

	_name = other._name;
	_hp = other._hp;
	_stamina = other._stamina;
	_attackPower = other._attackPower;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &other ){

	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_stamina = other._stamina;
		_attackPower = other._attackPower;
	}
	std::cout << "ClapTrap assignment constructor called." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap (){

	std::cout << "ClapTrap default destructor called." << std::endl;
}

void	ClapTrap::attack( const std::string &target){

	if (this->_hp <= 0)
	{
		std::cout << _name << " has no hit points left." << std::endl;
		return ;
	}
	if (this->_stamina <= 0){
		std::cout << this->_name << " has no energy left." << std::endl;
		return ;
	}
	this->_stamina--;
	std::cout << this->_name << " blasts " << target << ", dealing " << this->_attackPower << " damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ){

	if (this->_hp <= 0)
	{
		std::cout << _name << " has no hit points left." << std::endl;
		return ;
	}
	this->_hp = this->_hp - amount;
	std::cout << _name << " was clapped for " << amount << " damage!" << std::endl;
	if (this->_hp <= 0)
		std::cout << _name << " has been destroyed." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ){

	if (this->_hp <= 0)
	{
		std::cout << _name << " has no hit points left." << std::endl;
		return ;
	}
	if (this->_stamina <= 0)
	{
		std::cout << _name << " has no stamina left." << std::endl;
		return ;
	}
	this->_hp = this->_hp + amount;
	std::cout << _name << " was repaired for " << amount << " of hp!" << std::endl;
}