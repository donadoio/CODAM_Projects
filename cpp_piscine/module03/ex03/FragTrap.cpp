/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:37:52 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 23:53:31 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "<" << this->name << "><FR4G-TP> is ready to rumble. *Robotic Sounds*" << std::endl;
	return ;
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << std::endl << "Empty FragTrap Constructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
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
    std::cout << "<" << this->name << "><FR4G-TP> cloned by assignment and ready!" << std::endl;
	srand(time(NULL));
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->name << "><FR4G-TP> destroyed." << std::endl;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap(original)
{
	std::cout << "<" << this->name << "><FR4G-TP> copied and ready!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->hit_points > 0)
	{
		std::string attacks[6];

		attacks[0] = "with a fishing rod! **Whip**";
		attacks[1] = "by stabbing the heart <3";
		attacks[2] = "by making " + target + " fall in love and breaking it's cyber heart.";
		attacks[3] = "with a clothes hanger.";
		attacks[4] = "by smacking " + target + " with a belt.";
		attacks[5] = "by farting inside " + target + "'s mouth.";

		if (this->energy_points >= 25)
		{
			std::cout << "<" << this->name << "><FR4G-TP> has attacked <"
			<< target << "> " << attacks[rand() % 6] << std::endl;
			this->energy_points = this->energy_points - 25;
		}
		else
		{
			std::cout << "<" << this->name << "><FR4G-TP> doesn't have enough energy points to perform any attack!" << std::endl 
			<< ":( Try repairing first." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->name << "><FR4G-TP> is dead, it cannot vaulthunter_dot_exe(" << target << ")." << std::endl;
	}	
	return ;
}