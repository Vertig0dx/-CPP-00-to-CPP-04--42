/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:42:26 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 16:44:18 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class A_Animal{

	public:

	A_Animal	( void );
	A_Animal	( const A_Animal &other );
	A_Animal	&operator=( const A_Animal &other );
	virtual	~A_Animal	( void );
	
	virtual void			makeSound 	( void ) 	const = 0;
	void					getType		( void ) 	const;
	virtual void			getIdeas	( void ) 	const = 0;
	virtual void			indoctrinate( std::string idea , int i) = 0;

	protected:

	std::string		_type;

};

#endif