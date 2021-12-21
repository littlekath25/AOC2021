/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:40:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/15 01:22:19 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(void)
{
	std::ifstream				MyFile;
	std::string					Line;
	std::vector<std::string> 	Bingo;
	std::vector<std::string>	Boards;

	MyFile.open("input", std::ifstream::in);
	while (getline(MyFile, Line, ','))
		Bingo.push_back(Line);
	return (0);
}
