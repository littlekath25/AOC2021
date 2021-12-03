/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: katherine <katherine@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 08:45:48 by katherine     #+#    #+#                 */
/*   Updated: 2021/12/02 09:02:58 by katherine     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Submarine
{
	public:
		void increase_depth(int x)
		{
			depth += x;
		};
		void decrease_depth(int x)
		{
			depth -= x;
		};
		void increase_position(int x)
		{
			position += x;
		};
		void get_positions(void)
		{
			std::cout << "DEPTH: " << this->depth << " POSITION: " << this->position << std::endl;
			std::cout << "ANSWER: " << this->depth * this->position << std::endl;
		};
	private:
		int depth;
		int position;
};