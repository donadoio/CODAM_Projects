/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 00:14:55 by idonado       #+#    #+#                 */
/*   Updated: 2020/11/01 18:47:51 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT
#define ZOMBIEEVENT

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
	std::string	randomName(void);
public:
	void		setZombieType(std::string type);
	Zombie		*newZombie(std::string name) const;
	Zombie		*randomChump(void);
	ZombieEvent();
	~ZombieEvent();
};

#endif