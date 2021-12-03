/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kfu <kfu@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/01 10:13:56 by kfu           #+#    #+#                 */
/*   Updated: 2021/12/01 10:49:37 by kfu           ########   odam.nl         */
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
	int	A = 0;
	int B = 0;
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
	for (int i = 0; i < Size; i++)
	{
		int j = i + 1;
		int k = i + 2;
		if (Input[i] == 0 || Input[j] == 0 || Input[k] == 0)
			break ;
		A = Input[i] + Input[j] + Input[k];
		B = Input[i + 1] + Input[j + 1] + Input[k + 1];
		if (B > A)
			Increase++;
	}
	std::cout << "INCREASE IS: " << Increase << std::endl;
}
