/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:51 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/10/29 14:21:40 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i != argc; i++){
			for (int j = 0; j != (int)std::strlen(argv[i]); j++){
				std::cout << (char)std::toupper (argv[i][j]);
			}
			if (i != argc - 1)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
