/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:43:02 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:17:28 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Cat : public Animal{

	public:

	Cat	( void );
	Cat	( const Cat &other);
	Cat	&operator=( const Cat &other);
	~Cat	( void );

	void makeSound () const;

/* 	protected:

	std::string		_type;
 */
};

#endif