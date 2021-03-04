/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:37:52 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/01 22:54:27 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &name) : name(name)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	srand(time(NULL));
	std::cout << "*Robotic Sounds* Fr4gTp <" << name << "> created." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &original)
{
	*this = original;
	std::cout << "FR4G-TP <" << this->name << "> copied and ready!" << std::endl;
	srand(time(NULL));
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	srand(time(NULL));
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP <" << this->name << "> destroyed." << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	if (this->hit_points > 0)
	{
		std::cout << "FR4G-TP <" << this->name << "> has attacked someone called <"
		<< target << ">  with a gun, it caused <" << this->ranged_attack_damage << "> damage points! Ouch!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> is dead. X_X" << std::endl;
		std::cout << "It can't do anything if it's dead!" << std::endl;
	}
	return ;
}

void	FragTrap::meleeAttack(std::string const &target) const
{
	if (this->hit_points > 0)
	{
		std::cout << "FR4G-TP <" << this->name << "> has attacked someone called <"
		<< target << ">  with a stick, it caused <" << this->melee_attack_damage << "> damage points! Ouch!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> is dead. X_X" << std::endl;
		std::cout << "It can't do anything if it's dead!" << std::endl;
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if ((amount - (unsigned int)this->armor_damage_reduction) >= this->hit_points)
	{
		this->hit_points = 0;
		std::cout <<  "FR4G-TP <" << this->name << "> is dead. X_X" << std::endl;
		return ;
	}
	else
	{
		int damage = amount - this->armor_damage_reduction;
		this->hit_points = this->hit_points - damage;
		std::cout << "FR4G-TP <" << this->name << "> took <" << damage << "> damage points like a champ!" << std::endl;
		std::cout << "FR4G-TP <" << this->name << "> has <" << this->hit_points << "> HP left." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		if ((this->hit_points + amount) >= this->max_hit_points && this->hit_points != 100)
		{
			this->hit_points = 100;
			std::cout << "FR4G-TP <" << this->name << ">'s HP has been fully recovered!" << std::endl;
		}
		else if (this->hit_points != 100)
		{
			this->hit_points = this->hit_points + amount;
			std::cout << "FR4G-TP <" << this->name << ">'s HP has been recovered, it is now <" <<this->hit_points << ">." << std::endl;
		}
		if ((this->energy_points + amount) >= this->max_energy_points && this->energy_points != 100)
		{
			this->energy_points = 100;
			std::cout << "FR4G-TP <" << this->name << ">'s energy has been fully recovered!" << std::endl;
		}
		else if (this->energy_points != 100)
		{
			this->energy_points = this->energy_points + amount;
			std::cout << "FR4G-TP <" << this->name << ">'s energy has been recovered, it is now <" <<this->energy_points << ">." << std::endl;
		}
	}
	else
	{
		std::cout << "CANNOT RESPAWN THE DEAD." << std::endl;
	}
	return ;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[6];

	attacks[0] = "attack1";
	attacks[1] = "attack2";
	attacks[2] = "attack3";
	attacks[3] = "attack4";
	attacks[4] = "attack5";
	attacks[5] = "attack6";

	if (this->energy_points >= 25)
	{
		std::cout << "FR4G-TP <" << this->name << "> has attacked <"
		<< target << "> " << attacks[rand() % 6] << std::endl;
		this->energy_points -= 25;
	}
	else
	{
		std::cout << "FR4G-TP <" << this->name << "> doesn't have enough energy points to perform any attack!" << std::endl 
		<< ":( Try repairing first." << std::endl;
	}
	
}