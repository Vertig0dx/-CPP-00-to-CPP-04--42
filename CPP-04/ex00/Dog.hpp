/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:54:41 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:17:39 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog : public Animal{

	public:

	Dog	( void );
	Dog	( const Dog &other);
	Dog	&operator=( const Dog &other);
	~Dog	( void );

	void makeSound ()const ;

/* 	protected:

	std::string		_type;
 */
};

#endif