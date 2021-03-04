/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:38:45 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 23:51:20 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->max_energy_points = 50;
	this->energy_points = 50;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "<" << this->name << "><SC4V-TP> I HAVE SPAWNED... FEED ME." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	this->name = other.name;
    this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
    std::cout << "<" << this->name << "><SC4V-TP> cloned by assignment and ready!" << std::endl;
	srand(time(NULL));
	return (*this);
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << std::endl << "Empty ScavTrap Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->name << "><SC4V-TP> faded away into nothingness." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap(original)
{
	std::cout << "<" << this->name << "><SC4V-TP> has been copied. We're ready to go!" << std::endl;
}

void	ScavTrap::challengeNewcomer() const
{
	if (this->hit_points > 0)
	{
		std::string challenge[6];

		challenge[0] = "Fool! You cannot defeat me!";
		challenge[1] = "Betcha 20 euros I can whip your butt.";
		challenge[2] = "You've never seen a thingy magingy like me...";
		challenge[3] = "I may be made of metal, but I'm gonna beat you.";
		challenge[4] = "You make me sick, I'll defeat you!";
		challenge[5] = "You're so gross, low-quality robot this is your end!";

		std::cout << "<" << this->name << "> " << challenge[rand() % 6] << std::endl;
	}
	else
	{
		std::cout << "<" << this->name << "> is dead, it cannot challengeNewcomer()" << std::endl;
	}	
	return ;
}