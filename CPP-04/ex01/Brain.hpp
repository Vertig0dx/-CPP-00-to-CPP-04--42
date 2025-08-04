/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:54:59 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 14:09:56 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <string>
#include <iostream>

class Brain{

	public:

	Brain 						( void );
	Brain 						( const Brain &other );
	Brain &operator= 			( const Brain &other );
	~Brain 						( void );

	bool		checkIdeas 		( int i ) const;
	std::string	getIdeas		( int i ) const;
	void		setIdeas		( std::string idea, int i );

	private:

	std::string					_ideas [100];
};

#endif