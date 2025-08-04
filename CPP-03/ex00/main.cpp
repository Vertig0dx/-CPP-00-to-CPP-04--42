/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:14:35 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/04 17:16:46 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	{
	ClapTrap G0DTRAP	("G0DTRAP");
	ClapTrap PunyTrap	("PunyTrap");

	PunyTrap.takeDamage(5);
	PunyTrap.beRepaired(5);
	}
	{
	ClapTrap G0DTRAP	("G0DTRAP");
	ClapTrap PunyTrap	("PunyTrap");
	
	for (int i = 0; i != 15; i++){

		PunyTrap.attack("G0DTRAP");
		G0DTRAP.takeDamage(0);
	}
	G0DTRAP.takeDamage(10);
	PunyTrap.takeDamage(5);
	PunyTrap.beRepaired(5);
	G0DTRAP.beRepaired(100);
	return (0);
	}
}
