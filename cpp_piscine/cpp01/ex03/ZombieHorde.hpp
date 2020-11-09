/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 20:27:24 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/01 20:48:22 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE
#define ZOMBIEHORDE

#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string	randomName();
public:
	Zombie	*zombies;
	ZombieHorde(int N);
	~ZombieHorde();
};

#endif