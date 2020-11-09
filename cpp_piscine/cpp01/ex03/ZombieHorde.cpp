/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 20:28:15 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/01 20:59:39 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string     ZombieHorde::randomName()
{
        std::string random_name[] = {"Kyle", "Stan", "Kenny", "Stuart",
        "George", "Edward", "Michael", "Sam", "Jack", "Charles", "Darius",
        "Donald", "Joseph", "Joshua", "Brad", "Brandon", "Jim", "Bobby",
		"Jessica", "Jennifer", "Stefan", "Gloria", "Kelsey", "Chelsea"};
        return (random_name[rand() % 23]);
}

ZombieHorde::ZombieHorde(int N)
{
	this->zombies = new Zombie[N];
	int		i;

	i = 0;
	srand(time(NULL));
	while (i < N)
	{
		this->zombies[i] = Zombie(this->randomName(), "Nightwalker");
		this->zombies[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}
