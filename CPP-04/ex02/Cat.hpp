/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:43:02 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:26:40 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat : public A_Animal{

	public:

	Cat						( void );
	Cat						( const Cat &other );
	Cat	&operator=			( const Cat &other );
	~Cat					( void );

	void makeSound			() const;
	void getIdeas			() const;
	void indoctrinate		( std::string idea, int i);
	
	private:

	Brain				*_Brain;

/* 	protected:

	std::string		_type;
 */
};

#endif