/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:40:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/03 17:36:15 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	close_and_open(std::fstream *File, std::string FileName)
{
	File->close();
	File->open(FileName, ios::in | ios::out);
}

int		main(void)
{
	std::fstream	MyFile;
	std::string		FileName = "test";
	std::string		Line;
	char			GammaRate;
	std::string		EpsilonRate;
	int				FileLines = 5;
	int				Ones = 0;
	int				Number = 0;
	int				i;

	i = 0;
	MyFile.open(FileName, ios::in | ios::out);
	while(MyFile.is_open() && FileLines > 1)
	{
		while (i < 12)
		{
			Ones = 0;
			while(getline(MyFile, Line, '\n'))
			{
				Number = Line[i] - 48;
				if (Number == 1)
					Ones++;
			}
			if (Ones > (FileLines / 2))
				GammaRate = '1';
			else
				GammaRate = '0';
			close_and_open(&MyFile, FileName);
			while (getline(MyFile, Line, '\n'))
			{
				std::cout << Line << std::endl;
				if (Line[i] != GammaRate)
					std::cout << "DELETTEEEE" << std::endl;
			}
			close_and_open(&MyFile, FileName);
			i++;
		}
		FileLines = 0;
	}
	return (0);
}