/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:37:52 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 22:46:37 by idonado       ########   odam.nl         */
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
	std::cout << "<" << name << "><FR4G-TP> created.  *Robotic Sounds*" << std::endl;
	return ;
}

FragTrap::FragTrap()
{
	std::cout << "Empty FR4G-TP Constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &original)
{
	*this = original;
	std::cout << "<" << this->name << "><FR4G-TP> copied and ready!" << std::endl;
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
	std::cout << "<" << this->name << "><FR4G-TP> cloned and assigned!" << std::endl;
	srand(time(NULL));
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "<" << this->name << "><FR4G-TP destroyed." << std::endl;
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
		std::cout << "<" << this->name << "><FR4G-TP> is dead. It cannot attack!" << std::endl;
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
		std::cout << "<" << this->name << "><FR4G-TP> is dead. It cannot attack!" << std::endl;
	}
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		if ((amount - (unsigned int)this->armor_damage_reduction) >= this->hit_points)
		{
			this->hit_points = 0;
			std::cout <<  "<" << this->name << "><FR4G-TP> took <" << amount << "> damage  and died." << std::endl;
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
	else
	{
		std::cout << "<" << this->name << "><FR4G-TP> is dead, it cannot take damage." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		if ((this->hit_points + amount) >= this->max_hit_points && this->hit_points != this->max_hit_points)
		{
			this->hit_points = this->max_hit_points;
			std::cout << "<" << this->name << "><FR4G-TP>'s HP has been fully recovered!" << std::endl;
		}
		else if (this->hit_points != max_hit_points)
		{
			this->hit_points = this->hit_points + amount;
			std::cout << "<" << this->name << "><FR4G-TP>'s HP has been recovered, it is now <" <<this->hit_points << ">." << std::endl;
		}
		if ((this->energy_points + amount) >= this->max_energy_points && this->energy_points != this->max_energy_points)
		{
			this->energy_points = this->max_energy_points;
			std::cout << "<" << this->name << "><FR4G-TP>'s energy has been fully recovered!" << std::endl;
		}
		else if (this->energy_points != max_energy_points)
		{
			this->energy_points = this->energy_points + amount;
			std::cout << "<" << this->name << "><FR4G-TP>'s energy has been recovered, it is now <" <<this->energy_points << ">." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->name << "> CANNOT RESPAWN THE DEAD." << std::endl;
	}
	return ;
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
			this->energy_points -= 25;
		}
		else
		{
			std::cout << "<" << this->name << "><FR4G-TP> doesn't have enough energy points to vaulthunter_dot_exe(" << target << ")!" << std::endl 
			<< ":( Try repairing first." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->name << "><FR4G-TP> is dead, it cannot vaulthunter_dot_exe(" << target << ")." << std::endl;
	}
}