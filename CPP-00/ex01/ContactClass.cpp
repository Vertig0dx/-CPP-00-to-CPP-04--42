/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:14:58 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/05 17:40:29 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact( void ){
	
	//std::cout << "Default Contact constructor called" << std::endl;
	//return ;
}

Contact::Contact( std::string first_name,
				std::string last_name,
				std::string nickname,
				int phone_number,
				std::string darkest_secret){
	
	//std::cout << "Copy Contact constructor called" << std::endl;
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
	return ;
}

Contact::~Contact( void ){
	
	//std::cout << "Contact destructor called" << std::endl;
	//return ;
}

std::string Contact::getFirstName()const{

	return (_first_name);
}

std::string Contact::getLastName()const{

	return (_last_name);
}

std::string Contact::getNickname()const{

	return (_nickname);
}

int Contact::getPhoneNumber()const{

	return (_phone_number);
}

std::string Contact::getDarkestSecret()const{

	return (_darkest_secret);
}
