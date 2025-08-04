/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:51:44 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/26 16:22:50 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main( void ){
	{
		int hordeSize = 5;
		Zombie *horde = zombieHorde( hordeSize, "Gofas");
		for (int i = 0; i < hordeSize; i++)
			horde[i].announce ();
		delete [] horde;
	}
	{
		int hordeSize = 3;
		Zombie *horde = zombieHorde( hordeSize, "Gofas 2");
		for (int i = 0; i < hordeSize; i++)
			horde[i].announce ();
		delete [] horde;
	}
	return (0);
}

