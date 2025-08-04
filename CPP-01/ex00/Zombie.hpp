/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:23:37 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/07 12:45:03 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>

class Zombie{

	public:

	Zombie						( void );
	Zombie						( std::string name);
	~Zombie						( void );
	void 		announce		( void );

	private:

	std::string	_name;

};

#endif