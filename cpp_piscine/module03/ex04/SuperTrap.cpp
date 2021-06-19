/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/05 00:20:35 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 17:40:20 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap()
{
	std::cout << "Empty SuperTrap Constructor called." << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string const &name) : ClapTrap(name)
{
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_damage = 60;
	std::cout << "<" << this->name << "><SUPER-TP> SPAWNED... HUUYAH!! *ROBOTIX SOUNDZZZ*." << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(other)
{
	std::cout << "<" << this->name << "><SUPER-TP> copied and ready!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &other)
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
    std::cout << "<" << this->name << "><SUPER-TP> cloned by assignment and ready!" << std::endl;
	srand(time(NULL));
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "<" << this->name << "><SUPER-TP> destroyed." << std::endl;
	return ;
}

void	SuperTrap::meleeAttack(std::string const &target)  const
{
	NinjaTrap::meleeAttack(target);
	return;
}

void	SuperTrap::rangedAttack(std::string const &target)  const
{
	FragTrap::rangedAttack(target);
	return;
}
