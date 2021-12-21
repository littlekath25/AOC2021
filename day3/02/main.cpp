/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:40:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/15 01:21:53 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	find_co2_data(std::vector<std::string> Data)
{
	char						RateToLookFor;
	size_t						i;
	int							Pos;
	int							Ones;
	int							Zeros;

	i = 0;
	Pos = 0;
	Zeros = 0;
	while (Data.size() > 1 && Pos < 12)
	{
		i = 0;
		Zeros = 0;
		Ones = 0;
		while (i < Data.size())
		{
			if (Data[i][Pos] == '0')
				Zeros++;
			else
				Ones++;
			i++;
		}
		if (Zeros <= Ones)
			RateToLookFor = '0';
		else
			RateToLookFor = '1';
		i = 0;
		while (i < Data.size())
		{
			if (Data[i][Pos] != RateToLookFor)
			{
				Data.erase(Data.begin() + i);
				if (Data.size() == 1)
					break ;
				continue ;
			}
			i++;
		}
		Pos++;
	}
	std::cout << "CO2 DATA: " << Data[0] << std::endl;
}


void	find_oxy_data(std::vector<std::string> Data)
{
	char						RateToLookFor;
	size_t						i;
	int							Pos;
	int							Ones;
	int							Zeros;				

	i = 0;
	Pos = 0;
	Ones = 0;
	while (Data.size() > 1 && Pos < 12)
	{
		i = 0;
		Ones = 0;
		Zeros = 0;
		while (i < Data.size())
		{
			if (Data[i][Pos] == '1')
				Ones++;
			else
				Zeros++;
			i++;
		}
		if (Ones >= Zeros)
			RateToLookFor = '1';
		else
			RateToLookFor = '0';
		i = 0;
		while (i < Data.size())
		{
			if (Data[i][Pos] != RateToLookFor)
			{
				Data.erase(Data.begin() + i);
				if (Data.size() == 1)
					break ;
				continue ;
			}
			i++;
		}
		Pos++;
	}
	std::cout << "OXY DATA: " << Data[0] << std::endl;
}

int		main(void)
{
	std::ifstream				MyFile;
	std::string					Line;
	std::vector<std::string> 	Data;

	MyFile.open("input", std::ifstream::in);
	while (getline(MyFile, Line))
		Data.push_back(Line);
	find_oxy_data(Data);
	find_co2_data(Data);
	return (0);
}

// ANSWER: 3443 * 1357 = 4672151
