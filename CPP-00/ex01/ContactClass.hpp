/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:04:22 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/04 18:07:16 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact{

	public:

		Contact (void);
		Contact (
				std::string first_name,
				std::string last_name,
				std::string nickname,
				int 		phone_number,
				std::string darkest_secret);
		~Contact (void);
		std::string getFirstName()const;
		std::string getLastName()const;
		std::string getNickname()const;
		int 		getPhoneNumber()const;
		std::string getDarkestSecret()const;

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		int			_phone_number;
		std::string	_darkest_secret;
};

#endif