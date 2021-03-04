/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:38:45 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/01 23:01:24 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &name)
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->name = name;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << "SC4V-TP <" << name << "> HAS SPAWNED... FEED ME." << std::endl;
	srand(time(NULL));
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << name << "> faded away into nothingness." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &original)
{
	*this = original;
	std::cout << "SC4V-TP <" << name << "> has been cloned. We're ready to go!" << std::endl;
	srand(time(NULL));
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	this->hit_points = other.hit_points;
	this->max_hit_points = other.max_hit_points;
	this->energy_points = other.energy_points;
	this->max_energy_points = other.max_energy_points;
	this->level = other.level;
	this->name = other.name;
	this->melee_attack_damage = other.melee_attack_damage;
	this->ranged_attack_damage = other.ranged_attack_damage;
	this->armor_damage_reduction = other.armor_damage_reduction;
	std::cout << "SC4V-TP <" << name << "> has been cloned." << std::endl;
	srand(time(NULL));
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const &target) const
{
	if (this->hit_points > 0)
	{
		std::cout << "SC4V-TP <" << this->name << "> has shot a flaming arrow at someone called <"
		<< target << ">  using a crossbow, it caused <" << this->ranged_attack_damage << "> damage points! That's gotta sting!" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP <" << this->name << "> has died. It cannot obey you!" << std::endl;
		std::cout << "It can't do anything if it's dead!" << std::endl;
	}
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target) const
{

	if (this->hit_points > 0)
	{
		std::cout << "SC4V-TP <" << this->name << "> is stabbing <"
		<< target << ">  rapidly with a laser knife. <" << this->melee_attack_damage << "> damage points! Bazinga!" << std::endl;
	}
	else
	{
		std::cout << "SC4V-TP <" << this->name << "> has died. It cannot obey you!" << std::endl;
		std::cout << "It can't do anything if it's dead!" << std::endl;
	}
	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if ((amount - (unsigned int)this->armor_damage_reduction) >= this->hit_points)
	{
		this->hit_points = 0;
		std::cout <<  "SC4V-TP <" << this->name << "> is dead. X_X" << std::endl;
		return ;
	}
	else
	{
		int damage = amount - this->armor_damage_reduction;
		this->hit_points = this->hit_points - damage;
		std::cout << "SC4V-TP <" << this->name << "> took <" << damage << "> damage points! 'SSSSS Away!!!' " << std::endl;
		std::cout << "SC4V-TP <" << this->name << ">'s HP IS NOW <" << this->hit_points << "> ." << std::endl;
	}
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		if ((this->hit_points + amount) >= this->max_hit_points && this->hit_points != 100)
		{
			this->hit_points = 100;
			std::cout << "SC4V-TP <" << this->name << ">'s HP has been fully recovered!" << std::endl;
		}
		else if (this->hit_points != 100)
		{
			this->hit_points = this->hit_points + amount;
			std::cout << "SC4V-TP <" << this->name << ">'s HP has been recovered, it is now <" <<this->hit_points << ">." << std::endl;
		}
		if ((this->energy_points + amount) >= this->max_energy_points && this->energy_points != 50)
		{
			this->energy_points = 50;
			std::cout << "SC4V-TP <" << this->name << ">'s energy has been fully recovered!" << std::endl;
		}
		else if (this->energy_points != 50)
		{
			this->energy_points = this->energy_points + amount;
			std::cout << "SC4V-TP <" << this->name << ">'s energy has been recovered, it is now <" <<this->energy_points << ">." << std::endl;
		}
	}
	else
	{
		std::cout << "CANNOT RESPAWN THE DEAD." << std::endl;
	}
	return ;
}

void	ScavTrap::challengeNewcomer() const
{
	if (this->hit_points > 0)
	{
		std::string challenge[6];

		challenge[0] = "challenge1";
		challenge[1] = "challenge2";
		challenge[2] = "challenge3";
		challenge[3] = "challenge4";
		challenge[4] = "challenge5";
		challenge[5] = "challenge6";

		std::cout << "<" << this->name << "> " << challenge[rand() % 6] << std::endl;
	}
	else
	{
		std::cout << "<" << this->name << "> I'm dead, what do you want from me?" << std::endl;
	}	
	return ;
}