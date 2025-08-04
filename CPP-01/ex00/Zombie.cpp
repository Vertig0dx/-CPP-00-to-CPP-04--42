/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:29:34 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/07 16:15:19 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ){

};

Zombie::Zombie ( std::string name ){

	_name = name;	
};

Zombie::~Zombie ( void ){

	std::cout << "Destructor called for zombie " << _name << std::endl;
};

void Zombie::announce ( void ){

	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};

/* std::string Zombie::getName ()const{
	
	return (_name);
};
*/

/* int main()
{
	Zombie a;
	Zombie b;

	b = a;
}*/