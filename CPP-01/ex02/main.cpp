/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:23:20 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/11 13:29:52 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>
#include <iomanip>

int main (void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "string memory address = " << &string << std::endl;
	std::cout << "stringPTR memory address = " << &stringPTR << std::endl;
	std::cout << "stringREF memory address = " << &stringREF << std::endl;
	std::cout << "string value = " << string << std::endl;
	std::cout << "stringPTR value = " << *stringPTR << std::endl;
	std::cout << "stringREF value = " << stringREF << std::endl;
	return (0);
}
