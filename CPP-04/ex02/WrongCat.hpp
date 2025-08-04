/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:34:10 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:37:29 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal{

	public:

	WrongCat	( void );
	WrongCat	( const WrongCat &other);
	WrongCat	&operator=( const WrongCat &other);
	~WrongCat	( void );

	void makeSound () const;

/* 	protected:

	std::string		_type;
 */
};

#endif