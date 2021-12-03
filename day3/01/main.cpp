/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:40:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/03 14:39:44 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(void)
{
	std::ifstream	MyFile;
	std::string		FileName = "input";
	std::string		Line;
	std::string		GammaRate;
	std::string		EpsilonRate;
	int				FileSize = 1001;
	int				Ones = 0;
	int				Number = 0;
	int				i;

	i = 0;
	MyFile.open(FileName, std::ifstream::in);
	while (MyFile.is_open() && i < 12)
	{
		Ones = 0;
		while(getline(MyFile, Line, '\n'))
		{
			Number = Line[i] - 48;
			if (Number == 1)
				Ones++;
		}
		if (Ones > (FileSize / 2))
			GammaRate.append("1");
		else
			GammaRate.append("0");
		MyFile.close();
		MyFile.open(FileName, std::ifstream::in);
		i++;
	}
	EpsilonRate = GammaRate;
	for (i = 0; i < 12; i++)
	{
		if (GammaRate[i] == '1')
			EpsilonRate[i] = '0';
		else
			EpsilonRate[i] = '1';
	}
	std::cout << "Gamma Rate: " << GammaRate << std::endl;
	std::cout << "Epsilon Rate: " << EpsilonRate << std::endl;
	return (0);
}