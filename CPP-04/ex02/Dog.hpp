/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:54:41 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:33:09 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog : public A_Animal{

	public:

	Dog						( void );
	Dog						( const Dog &other );
	Dog	&operator=			( const Dog &other );
	~Dog					( void );

	void makeSound			() const ;
	void getIdeas			() const;
	void indoctrinate		( std::string idea, int i );

	private:

	Brain				*_Brain;

/* 	protected:

	std::string		_type;
*/
};

#endif