/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:41:22 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/12 14:17:34 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ){
	
};

Harl::~Harl( void ){

};

void Harl::_debug		( void ){

	std::cout << "Debug level called, this is a debug message." << std::endl;
};

void Harl::_info		( void ){

	std::cout << "Info level called, this is a info message." << std::endl;
};

void Harl::_warning	( void ){

	std::cout << "Warning level called, this is a warning message." << std::endl;
};

void Harl::_error		( void ){

	std::cout << "Error level called, this is a error message." << std::endl;
};

void Harl::complain(std::string level){

	const ptrToFunc functions[4] = {
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	int levelInt = -1;
	if (!level.compare("DEBUG"))
		levelInt = 0;
	else if (!level.compare("INFO"))
		levelInt = 1;
	else if (!level.compare("WARNING"))
		levelInt = 2;
	else if (!level.compare("ERROR"))
		levelInt = 3;
	switch (levelInt){
		case (0):
		{
			(this->*(functions[levelInt]))();
			break ;
		}
		case (1):
		{
			(this->*(functions[levelInt]))();
			break ;
		}
		case (2):
		{
			(this->*(functions[levelInt]))();
			break ;
		}
		case (3):
		{
			(this->*(functions[levelInt]))();
			break ;
		}
		case (-1):
		{
			std::cout << "Your level does not match any complaint. Harl." << std::endl;
			break ;
		}
	}
	
	
}