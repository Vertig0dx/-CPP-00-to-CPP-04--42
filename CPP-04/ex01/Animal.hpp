/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:42:26 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 15:29:05 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{

	public:

	Animal	( void );
	Animal	( const Animal &other );
	Animal	&operator=( const Animal &other );
	virtual	~Animal	( void );
	
	virtual void			makeSound 	( void ) 	const;
	void					getType		( void ) 	const;
	virtual void			getIdeas	( void ) 	const;
	virtual void			indoctrinate( std::string idea , int i);

	protected:

	std::string		_type;

};

#endif