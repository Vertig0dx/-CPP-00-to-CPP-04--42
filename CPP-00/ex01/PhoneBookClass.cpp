/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:39:05 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/11 15:19:13 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

int PhoneBook::initialized_contacts = 0;

PhoneBook::PhoneBook( void ){

	//std::cout << "Standard PhoneBook constructor called" << std::endl;
	//return ;
}

PhoneBook::~PhoneBook( void ){

	//std::cout << "PhoneBook destructor called" << std::endl;
	//return ;
}

int PhoneBook::AddContact( int index ){

	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	int				phone_number = -1;
	std::string		phone_number_temp;
	std::string		darkest_secret;
	int				j;

	std::cout << "Please input contact information." << std::endl;
	for (int i = 0; i < 5; i++)
		switch (i){
			case 0:
				std::cout << "First name:" << std::endl;
				std::getline(std::cin, first_name);
				if (std::cin.eof())
				{
					std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Contact not added." << std::endl;
					return (0);
				}
				else if (first_name.empty())
				{
					std::cout << "Empty fields are not accepted." << std::endl;
					i--;
					continue ;
				}
				break ;
			case 1:
				std::cout << "Last name:" << std::endl;
				std::getline(std::cin, last_name);
				if (std::cin.eof())
				{
					std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Contact not added." << std::endl;
					return (0);
				}
				else if (last_name.empty())
				{
					std::cout << "Empty fields are not accepted." << std::endl;
					i--;
					continue ;
				}
				break ;
			case 2:
				std::cout << "Nickname:" << std::endl;
				std::getline(std::cin, nickname);
				if (std::cin.eof())
				{
					std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Contact not added." << std::endl;
					return (0);
				}
				else if (nickname.empty())
				{
					std::cout << "Empty fields are not accepted." << std::endl;
					i--;
					continue ;
				}
				break ;
			case 3:
				std::cout << "Phone number:" << std::endl;
				std::getline(std::cin, phone_number_temp);
				if (std::cin.eof())
				{
					std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Contact not added." << std::endl;
					return (0);
				}
				for (j = 0; (size_t)j < phone_number_temp.length(); j++)
					if (phone_number_temp.c_str()[j] < '0' || phone_number_temp.c_str()[j] > '9' )
						{
							std::cout << "Invalid phone number, please use only numbers" << std::endl;
							break ;
						}
				if ((size_t)j == phone_number_temp.length())
					phone_number = std::atoi(phone_number_temp.c_str());
				if (phone_number < 0 || !phone_number)
				{
					std::cout << "Empty fields are not accepted." << std::endl;
					i--;
					continue ;
				}
				break ;
			case 4:
				std::cout << "Darkest secret:" << std::endl;
				std::getline(std::cin, darkest_secret);
				if (std::cin.eof())
				{
					std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Contact not added." << std::endl;
					return (0);
				}
				else if (darkest_secret.empty())
				{
					std::cout << "Empty fields are not accepted." << std::endl;
					i--;
					continue ;
				}
				break ;
		}
	if (!first_name.empty() && !last_name.empty() && !nickname.empty() \
			&& phone_number && !darkest_secret.empty())
	{
		this->_contact[index % 8] = Contact(first_name, last_name, nickname,
											phone_number,
											darkest_secret);
		this->initialized_contacts++;
		return (1);
	}
	return (0);
}

void	PhoneBook::SearchContact ( void ){

	int 		index = 0;
	std::string index_input;
	int			converted_index = -1;
	int 		j = 0;

	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	while (index < 8)
	{
		std::cout << std::setw(10) << index + 1;
		std::cout << "|";
		if (this->_contact[index].getFirstName().length() >= 10)
			std::cout << (this->_contact[index].getFirstName().substr(0, 9) + "."); 
		else
			std::cout << std::setw(10) << this->_contact[index].getFirstName();
		std::cout << "|";
		if (this->_contact[index].getLastName().length() >= 10)
			std::cout << (this->_contact[index].getLastName().substr(0, 9) + "."); 
		else
			std::cout << std::setw(10) << this->_contact[index].getLastName();
		std::cout << "|";
		if (this->_contact[index].getNickname().length() >= 10)
			std::cout << (this->_contact[index].getNickname().substr(0, 9) + "."); 
		else
			std::cout << std::setw(10) << this->_contact[index].getNickname();
		std::cout << "|";
		std::cout << std::endl;
		index++;
	}
	while (1)
	{
		std::cout << "Please insert the index of your desired contact:" << std::endl;
		std::getline(std::cin, index_input);
		if (std::cin.eof() || index_input.empty())
			{
				std::cin.clear();
					std::cout << "Empty fields are not accepted." << std::endl;
					std::cout << "Exiting search function." << std::endl;
					return ;
			}
		for (j = 0; (size_t)j < index_input.length(); j++)
			if (index_input.c_str()[j] < '1' || index_input.c_str()[j] > '8' || j > 1)
			{
				std::cout << "Invalid index" << std::endl;
				converted_index = -2;
				break ;
			}
		if (converted_index == -2)
		{
			converted_index = -1;
			continue ;
		}
		else
		{
			converted_index = std::atoi(index_input.c_str());
			if (PhoneBook::initialized_contacts < converted_index)
			{
				std::cout << "Contact does not exist." << std::endl;
				return ;
			}
		}
		std::cout << "First Name: " << this->_contact[converted_index - 1].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contact[converted_index - 1].getLastName() << std::endl;
		std::cout << "Nickname: " << this->_contact[converted_index - 1].getNickname() << std::endl;
		std::cout << "Phone Number: " << this->_contact[converted_index - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << this->_contact[converted_index - 1].getDarkestSecret() << std::endl;
		std::cin.clear();
		return ;
	}
	return ;
}

//endl flushes cout buffer

/* index|first|last|nick newline */