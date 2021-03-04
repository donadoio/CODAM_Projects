/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:38:45 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 19:36:21 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->setEnergy(50);
	this->setMaxEnergy(50);
	this->setMelee(20);
	this->setRanged(15);
	this->setArmor(3);
	std::cout << "<" << this->getName() << "><SC4V-TP> I HAVE SPAWNED... FEED ME." << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->getName() << "><SC4V-TP> faded away into nothingness." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap(original)
{
	std::cout << "<" << this->getName() << "><SC4V-TP> has been copied. We're ready to go!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "<" << this->getName() << "><SC4V-TP> has been assigned and cloned." << std::endl;
	this->operator=(other);
	return (*this);
}

void	ScavTrap::challengeNewcomer()
{
	if (this->getHealth() > 0)
	{
		std::string challenge[6];

		challenge[0] = "Fool! You cannot defeat me!";
		challenge[1] = "Betcha 20 euros I can whip your butt.";
		challenge[2] = "You've never seen a thingy magingy like me...";
		challenge[3] = "I may be made of metal, but I'm gonna beat you.";
		challenge[4] = "You make me sick, I'll defeat you!";
		challenge[5] = "You're so gross, low-quality robot this is your end!";

		std::cout << "<" << this->getName() << "> " << challenge[rand() % 6] << std::endl;
	}
	else
	{
		std::cout << "<" << this->getName() << "> is dead, it cannot challengeNewcomer()" << std::endl;
	}	
	return ;
}