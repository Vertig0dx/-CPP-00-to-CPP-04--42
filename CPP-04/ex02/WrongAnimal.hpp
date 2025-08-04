/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 19:32:02 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/05 19:37:45 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal{

	public:

	WrongAnimal	( void );
	WrongAnimal	( const WrongAnimal &other);
	WrongAnimal	&operator=( const WrongAnimal &other);
	~WrongAnimal	( void );
	
	void			makeSound () const;
	void			getType() const;

	protected:

	std::string		_type;

};

#endif