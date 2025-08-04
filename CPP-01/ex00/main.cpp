/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:21:59 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/07 12:43:25 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void	randomChump	( std::string name );
Zombie*	newZombie	( std::string name );

int	main(){
	
	Zombie z1 = Zombie( "z1" );
	Zombie *z2 = newZombie ( "z2" );

	z1.announce();
	z2->announce();
	randomChump( "z3" );

	delete z2;
	return (0);
}