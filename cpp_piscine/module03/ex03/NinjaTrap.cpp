/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 22:52:50 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 23:56:02 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
	std::cout << "Empty NinjaTrap Constructor called." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name)
{
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << "<" << this->name << "><NINJA-TP> has appeared slowly from the shadows. Haii-YA!" << std::endl;
	return ;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &other)
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
    std::cout << "<" << this->name << "><NINJA-TP> cloned by assignment and ready!" << std::endl;
	srand(time(NULL));
	return (*this);
}

NinjaTrap::NinjaTrap(NinjaTrap const &original) : ClapTrap(original)
{
	std::cout << "<" << this->name << "><NINJA-TP> has been copied ninja-style!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "<" << this->name << "><NINJA-TP> dissapeared in the shadows." << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap &target) const
{
	std::cout << "<" << this->name << "><NINJA-TP> has stored <" << target.getName() << "><NINJA-TP> inside a shoebox without it even realizing it, WHAT A NINJA!" << std::endl;
	return ;	
}

void	NinjaTrap::ninjaShoeBox(FragTrap &target) const
{
	std::cout << "<" << this->name << "><NINJA-TP> has launched a shoeBox at <" << target.getName() << "><FR4G-TP> at the speed of light, WHAT A NINJA!" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoeBox(ScavTrap &target) const
{
	std::cout << "<" << this->name << "><NINJA-TP> has kicked a shoe box from a  distance to <" << target.getName() << "><SC4V-TP>, it hit its head! WHAT A NINJA!" << std::endl;
	return ;
}