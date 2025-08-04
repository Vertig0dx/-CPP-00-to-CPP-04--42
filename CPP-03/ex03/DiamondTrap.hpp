/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:34:41 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 16:57:45 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap: public FragTrap, public ScavTrap{

	public:

	DiamondTrap				( void );
	DiamondTrap				( std::string name);
	DiamondTrap				( const DiamondTrap &other);
	DiamondTrap	&operator=	( const DiamondTrap &other);
	~DiamondTrap			( void );
	
	void	attack			( const std::string &target );
	void	getHp			( void );
	void	whoAmI			( void );

	protected:

	std::string		_name;
	int				_hp;
	int				_stamina;
	int				_attackPower;

};

#endif