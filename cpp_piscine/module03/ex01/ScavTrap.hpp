/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:37:53 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/01 23:07:47 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
class ScavTrap
{
	private:
	int			hit_points;
	int 		max_hit_points;
	int 		energy_points;
	int 		max_energy_points;
	int 		level;
	int 		melee_attack_damage;
	int 		ranged_attack_damage;
	int 		armor_damage_reduction;
	std::string	name;
	ScavTrap();
	public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &original);
	~ScavTrap();
	ScavTrap	&operator=(ScavTrap const &original);
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer() const;
};

#endif
