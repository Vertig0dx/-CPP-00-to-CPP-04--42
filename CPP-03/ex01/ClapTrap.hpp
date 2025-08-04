/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:15:13 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/29 14:58:27 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap{

	public:

	ClapTrap	( void );
	ClapTrap	( std::string name);
	ClapTrap	( const ClapTrap &other);
	ClapTrap	&operator=( const ClapTrap &other);
	~ClapTrap	( void );
	
	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	protected:

	std::string		_name;
	int				_hp;
	int				_stamina;
	int				_attackPower;

};



#endif