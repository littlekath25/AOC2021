/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 08:45:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/02 09:23:29 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Submarine
{
	public:
		Submarine(int x, int y, int z)
				: depth(x), position(y), aim(z){};
		void forward(int x)
		{
			position += x;
			depth += aim * x;
		};
		void up(int x)
		{
			aim -= x;
		};
		void down(int x)
		{
			aim += x;
		};
		void get_positions(void)
		{
			std::cout << "DEPTH: " << this->depth << " POSITION: " << this->position << " AIM: " << this->aim << std::endl;
			std::cout << "ANSWER: " << this->depth * this->position << std::endl;
		};
	private:
		int depth;
		int position;
		int	aim;
};