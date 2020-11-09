/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 00:13:11 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/01 18:42:54 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	zombie_event;
	Zombie		*zombie1;
	Zombie		*zombie2;
	Zombie		*zombie3;
	Zombie		*zombie_random1;
	Zombie		*zombie_random2;
	Zombie		*zombie_random3;
	Zombie		custom_zombie("Jimmy", "Fluffy");

	zombie_event.setZombieType("Blood Sucker");
	zombie1 = zombie_event.newZombie("Jeffry Eipstein");
	zombie2 = zombie_event.newZombie("Bill Cosby");
	zombie3 = zombie_event.newZombie("Bernie Sanders");

	zombie_event.setZombieType("Brain Eater");

	zombie_random1 = zombie_event.randomChump();
	zombie_random2 = zombie_event.randomChump();
	zombie_random3 = zombie_event.randomChump();

	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	zombie_random1->announce();
	zombie_random2->announce();
	zombie_random3->announce();
	custom_zombie.announce();

	delete zombie1;delete zombie2;delete zombie3;delete zombie_random1;delete zombie_random2;delete zombie_random3;
	return (0);
}