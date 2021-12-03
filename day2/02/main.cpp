/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 08:31:29 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/02 09:23:19 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	std::string		FileName;
	std::ifstream	MyFile;
	std::string		Line;
	Submarine		Sub(0, 0, 0);
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
				Sub.forward(number);
			}
			else if (Line.compare("up") == 0)
			{
				MyFile >> Line;
				number = std::stoi(Line);
				Sub.up(number);
			}
			else if (Line.compare("down") == 0)
			{
				MyFile >> Line;
				number = std::stoi(Line);
				Sub.down(number);
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