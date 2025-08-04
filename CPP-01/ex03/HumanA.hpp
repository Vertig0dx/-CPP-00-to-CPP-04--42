/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:49:57 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/08 15:17:48 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_HPP
# define	HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>

class HumanA{

	public:

	HumanA			( 	std::string name,
						Weapon &weapon );
	~HumanA			( void );
	void	attack	( void );

	private:

	HumanA			( void );
	std::string		_name;
	Weapon			&_weapon;

};

#endif

// referencias permitem "atribuir" objetos a outros objetos, usar &

/* int main()
{
	weapon faca;
	humanA jose ("jose", &faca);

	jose ataca faca parte;
	faca.check_durability();
	jose.faca.check_durability();
} */