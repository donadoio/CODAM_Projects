/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:26:55 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 18:37:10 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &name) : name(name)
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
    std::cout << "<" << name << "> extended from generic CL4P-TP." << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "<" << this->name << "> generic CL4P-TP destroyed." << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const   &original)
{
    *this = original;
    std::cout << "<" << this->name << "> copied from generic CL4P-TP and ready!" << std::endl;
    return ;
}

ClapTrap    &ClapTrap::operator=(ClapTrap    const &other)
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
    std::cout << "<" << this->name << "> cloned from generic CL4P-TP and ready!" << std::endl;
	srand(time(NULL));
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target) const
{
	if (this->hit_points > 0)
	{
		std::cout << "<" << this->name << "> has attacked someone called <"
		<< target << ">  with a gun, it caused <" << this->ranged_attack_damage << "> damage points! Ouch!" << std::endl;
	}
	else
	{
		std::cout << "<" << this->name << "> is dead. It cannot attack." << std::endl;
	}
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target) const
{
	if (this->hit_points > 0)
	{
		std::cout << "<" << this->name << "> has attacked someone called <"
		<< target << ">  with a stick, it caused <" << this->melee_attack_damage << "> damage points! Ouch!" << std::endl;
	}
	else
	{
		std::cout << "<" << this->name << "> is dead. it cannot attack." << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHealth() > 0)
    {
	    if ((amount - (unsigned int)this->armor_damage_reduction) >= this->hit_points)
	    {
	    	this->hit_points = 0;
	    	std::cout <<  "<" << this->name << "> took <" << amount << "> damage and died." << std::endl;
	    	return ;
	    }
	    else
	    {
	    	int damage = amount - this->armor_damage_reduction;
	    	this->hit_points = this->hit_points - damage;
	    	std::cout << "<" << this->name << "> took <" << damage << "> damage points like a champ!" << std::endl;
	    	std::cout << "<" << this->name << "> has <" << this->hit_points << "> HP left." << std::endl;
	    }
    }
    else
    {
        std::cout << "<" << this->getName() << "> is dead, it cannot take damage." << std::endl;
    }
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		if ((this->hit_points + amount) >= this->max_hit_points && this->hit_points != this->max_hit_points)
		{
			this->hit_points = max_hit_points;
			std::cout << "<" << this->name << ">'s HP has been fully recovered!" << std::endl;
		}
		else if (this->hit_points != max_hit_points)
		{
			this->hit_points = this->hit_points + amount;
			std::cout << "<" << this->name << ">'s HP has been recovered, it is now <" <<this->hit_points << ">." << std::endl;
		}
		if ((this->energy_points + amount) >= this->max_energy_points && this->energy_points != max_energy_points)
		{
			this->energy_points = max_energy_points;
			std::cout << "<" << this->name << ">'s energy has been fully recovered!" << std::endl;
		}
		else if (this->energy_points != max_energy_points)
		{
			this->energy_points = this->energy_points + amount;
			std::cout << "<" << this->name << ">'s energy has been recovered, it is now <" <<this->energy_points << ">." << std::endl;
		}
	}
	else
	{
		std::cout << "<" << this->getName() << "> CANNOT RESPAWN THE DEAD." << std::endl;
	}
	return ;
}

// Getters & Setters
std::string const   &ClapTrap::getName() const
{
    return (this->name);
}

int                 ClapTrap::getEnergy()
{
    return (this->energy_points);
}

int                 ClapTrap::getHealth()
{
    return (this->hit_points);
}

void                ClapTrap::setEnergy(int   energy)
{
    this->energy_points = energy;
}

void                ClapTrap::setMaxEnergy(int  energy)
{
    this->max_energy_points = energy;
}

void                ClapTrap::setMelee(int  amount)
{
    this->melee_attack_damage = amount;
}

void                ClapTrap::setRanged(int amount)
{
    this->ranged_attack_damage = amount;
}

void                ClapTrap::setArmor(unsigned int  amount)
{
    this->armor_damage_reduction = amount;
}

void                ClapTrap::setHealth(int health)
{
    this->hit_points = health;
}