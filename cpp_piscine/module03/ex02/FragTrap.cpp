/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:37:52 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 19:34:28 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "<" << this->getName() << "><FR4G-TP> is ready to rumble. *Robotic Sounds*" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->getName() << "><FR4G-TP> destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original)
{
	std::cout << "<" << this->getName() << "><FR4G-TP> copied and ready!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	this->operator=(other);
	std::cout << "<" << this->getName() << "><FR4G-TP> has been assigned and cloned." << std::endl;
	return (*this);
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->getHealth() > 0)
	{
		std::string attacks[6];

		attacks[0] = "with a fishing rod! **Whip**";
		attacks[1] = "by stabbing the heart <3";
		attacks[2] = "by making " + target + " fall in love and breaking it's cyber heart.";
		attacks[3] = "with a clothes hanger.";
		attacks[4] = "by smacking " + target + " with a belt.";
		attacks[5] = "by farting inside " + target + "'s mouth.";

		if (this->getEnergy() >= 25)
		{
			std::cout << "<" << this->getName() << "><FR4G-TP> has attacked <"
			<< target << "> " << attacks[rand() % 6] << std::endl;
			this->setEnergy(this->getEnergy() - 25);
		}
		else
		{
			std::cout << "<" << this->getName() << "><FR4G-TP> doesn't have enough energy points to perform any attack!" << std::endl 
			<< ":( Try repairing first." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->getName() << "><FR4G-TP> is dead, it cannot vaulthunter_dot_exe(" << target << ")." << std::endl;
	}	
	return ;
}