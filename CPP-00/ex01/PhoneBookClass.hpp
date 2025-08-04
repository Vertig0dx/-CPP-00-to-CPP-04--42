/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:00:44 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/05 17:41:08 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>

class PhoneBook{

	public:
		PhoneBook				( void );
		~PhoneBook				( void );
		int 	AddContact		( int index );
		void	SearchContact	( void );
		static int		initialized_contacts;

	private:
		Contact		_contact[8];
};

#endif