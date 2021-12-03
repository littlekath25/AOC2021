/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 10:13:56 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/01 10:41:59 by kfu           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int		main(void)
{
	int Size = 2000;
	int	Increase = 0;
	int	Input[Size];
	std::string FileName = "input";
	ifstream OpenFile;

	OpenFile.open(FileName.c_str());

	if (OpenFile.is_open())
	{
		for (int i = 0; i < Size; i++)
		{
			OpenFile >> Input[i];
		}
		OpenFile.close();
	}
	for (int i = 1; i < Size; i++)
	{
		int j = i - 1;
		if (Input[i] > Input[j])
		{
			Increase++;
			std::cout << i << " ----- " << j << " INCREASE " << Increase << std::endl;
		}
	}
}
