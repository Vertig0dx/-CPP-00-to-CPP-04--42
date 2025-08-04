/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:18:21 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 17:32:33 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public virtual ClapTrap{

	public :

	FragTrap	( void );
	FragTrap	( std::string name);
	FragTrap	( const FragTrap &other);
	FragTrap	&operator=( const FragTrap &other);
	~FragTrap	( void );

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

	void	highFivesGuys( void );
	
	protected:

	/* std::string		_name;
	int				_hp = 100;
	int				_stamina = 50;
	int				_attackPower = 20; */
};

#endif