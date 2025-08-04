/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:51:34 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/07 16:17:56 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie ( void ){

};

Zombie::Zombie ( std::string name ){

	_name = name;
};

void Zombie::setName (std::string name){
	
	_name = name;
}

Zombie::~Zombie ( void ){

	std::cout << "Destructor called for zombie " << _name << std::endl;
};

void Zombie::announce ( ){

	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
};
