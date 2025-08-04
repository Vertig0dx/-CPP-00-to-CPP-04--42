/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:16:45 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/12/18 15:39:00 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){

	std::cout << "Default Brain constructor called." << std::endl;
}

Brain::Brain( const Brain &other ){

	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i != 100; i++){
			if (other.getIdeas(i).length())
				this->_ideas[i] = other._ideas[i];
		}
}

Brain	&Brain::operator=( const Brain &other ){

	std::cout << "Brain assignment constructor called." << std::endl;
	if (this != &other)
	{
		for (int i = 0; i != 100; i++){
			if (other.getIdeas(i).length())
				this->_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain (){

	std::cout << "Brain default destructor called." << std::endl;
}

bool	Brain::checkIdeas ( int i ) const{

	if (i < 0 || i > 100)
		return (false);
	if (!_ideas[i].empty())
		return (true);
	else
		return (false);
}

std::string Brain::getIdeas ( int i ) const{

	if (i < 0 || i > 100)
		return "";
	if (!_ideas[i].empty())
		return _ideas[i];
	return "";
}

void	Brain::setIdeas		( std::string idea, int i ){

	if (i < 0 || i > 100)
		return ;
	this->_ideas[i] = idea;
}
