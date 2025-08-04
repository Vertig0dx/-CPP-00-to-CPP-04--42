/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:33:18 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/07 12:42:04 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

int main (void)
{
	PhoneBook phoneBook;
	std::string input;
	int index = 0;

	std::cout << "PhoneBook accessed:" << std::endl;
	while (1)
	{
		std::cout << "Please ADD, SEARCH or EXIT:" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		if (!input.compare ("ADD"))
		{
			if (phoneBook.AddContact(index) == 1)
			{
				std::cout << "Contact successfully added to phonebook." << std::endl;
				index++;
			}
		}
		else if (!input.compare ("SEARCH"))
			phoneBook.SearchContact();
		else if (!input.compare("EXIT"))
			exit (2);
		else
			continue ;
	}
	return (0);
}