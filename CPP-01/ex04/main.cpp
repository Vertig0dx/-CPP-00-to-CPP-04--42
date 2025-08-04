/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmiguel- <lmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:32:53 by lmiguel-          #+#    #+#             */
/*   Updated: 2024/11/29 17:05:14 by lmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>
#include <iomanip>

int main(int argc, char **argv){

	std::ifstream	file;
	std::ofstream	fileReplace;
	std::string		line;
	std::size_t		s1Start;
	std::string		new_line;
	
	if (argc != 4)
		return (0);
	std::string		fileName = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	file.open( argv[1] );
	fileReplace.open ( (fileName + ".replace").c_str());
	if (file && fileReplace)
	{
		while (std::getline(file, line)){
			while ( (s1Start = line.find(s1)) != std::string::npos)
			{
				new_line += line.substr(0, s1Start) + s2;
				line = line.substr(s1Start + s1.length(), line.length());
			}
			new_line += line;
			fileReplace << new_line << "\n";
			new_line = "";
		}
	}
	else
		std::cout << "Failed to read file." << std::endl;
	file.close();
	fileReplace.close();
}