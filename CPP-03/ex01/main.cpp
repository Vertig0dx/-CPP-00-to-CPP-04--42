/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:57:24 by lmiguel-          #+#    #+#             */
/*   Updated: 2025/03/25 17:20:57 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{

	{
		std::cout << std::endl;
		std::cout << "INITIATING CONSTRUCTOR AND DESTRUCTOR TESTS" << std::endl;
		std::cout << std::endl;
		ClapTrap TestTrap1;
		ClapTrap TestTrap2	( "TestTrap2" );
		ClapTrap TestTrap3;
		TestTrap3 = TestTrap2;
		ClapTrap TestTrap4 (TestTrap3);
		ScavTrap TestTrap5;
		ScavTrap TestTrap6	( "TestTrap6" );
		ScavTrap TestTrap7;
		TestTrap7 = TestTrap6;
		ScavTrap TestTrap8 (TestTrap7);
	}
	std::cout << std::endl;
	std::cout << "ENDING CONSTRUCTOR AND DESTRUCTOR TESTS" << std::endl;
	std::cout << std::endl;
	{
		std::cout << std::endl;
		std::cout << "INITIATING NO ENERGY TESTS" << std::endl;
		std::cout << std::endl;
		ClapTrap G0DTRAP	("G0DTRAP");
		ScavTrap CharlieTrap("CharlieTrap");
		G0DTRAP.takeDamage(200);
		G0DTRAP.beRepaired(0);
		G0DTRAP.attack("CharlieTrap");
		G0DTRAP.takeDamage(200);
		CharlieTrap.takeDamage(200);
		CharlieTrap.beRepaired(0);
		CharlieTrap.attack("CharlieTrap");
		CharlieTrap.takeDamage(200);
	}
	std::cout << std::endl;
	std::cout << "ENDING NO ENERGY TESTS" << std::endl;
	std::cout << std::endl;
	{
	std::cout << std::endl;
	std::cout << "INITIATING UNIQUE FUNCTION TESTS" << std::endl;
	std::cout << std::endl;
	ScavTrap CharlieTrap("CharlieTrap");
	CharlieTrap.guardGate();
	}
	std::cout << std::endl;
	std::cout << "ENDING UNIQUE FUNCTION TESTS" << std::endl;
	std::cout << std::endl;
	return (0);
}
