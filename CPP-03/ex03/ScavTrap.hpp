/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:23:11 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 15:26:25 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public virtual ClapTrap{

	public :

	ScavTrap	( void );
	ScavTrap	( std::string name);
	ScavTrap	( const ScavTrap &other);
	ScavTrap	&operator=( const ScavTrap &other);
	~ScavTrap	( void );

	/* 
	public:

	ClapTrap	( void );
	ClapTrap	( std::string name);
	ClapTrap	( ClapTrap &other);
	ClapTrap	&operator=( ClapTrap &other);
	~ClapTrap	( void );
	
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
	*/

	void	attack( const std::string &target );
	void	guardGate();
	
	protected:

	/* std::string		_name;
	int				_hp = 100;
	int				_stamina = 50;
	int				_attackPower = 20; */
};

#endif