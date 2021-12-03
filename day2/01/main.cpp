/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 08:31:29 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/02 09:02:32 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::string		FileName;
	std::ifstream	MyFile;
	std::string		Line;
	Submarine		Sub;
	int				number;

	FileName = "input";
	MyFile.open(FileName, std::ifstream::in);
	if (MyFile.is_open())
	{
		while (MyFile >> Line)
		{
			number = 0;
			if (Line.compare("forward") == 0)
			{
				MyFile >> Line;
				number = std::stoi(Line);
				Sub.increase_position(number);
			}
			else if (Line.compare("up") == 0)
			{
				MyFile >> Line;
				number = std::stoi(Line);
				Sub.decrease_depth(number);
			}
			else if (Line.compare("down") == 0)
			{
				MyFile >> Line;
				number = std::stoi(Line);
				Sub.increase_depth(number);
			}
			else
				continue ;
		}
		MyFile.close();
		Sub.get_positions();
	}
	else
		std::cout << "Can't open file" << std::endl;
}