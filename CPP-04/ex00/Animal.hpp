/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:42:26 by lmiguel-          #+#    #+#             */
/*   Updated: 2025/03/06 15:24:47 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{

	public:

	Animal	( void );
	Animal	( const Animal &other);
	Animal	&operator=( const Animal &other);
	virtual	~Animal	( void );
	
	virtual void	makeSound () const;
	void			getType() const;

	protected:

	std::string		_type;

};

#endif