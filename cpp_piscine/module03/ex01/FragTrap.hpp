/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/28 16:28:12 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 22:37:54 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

class FragTrap {
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

	public:
	FragTrap();
	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const &target);
	FragTrap	&operator=(FragTrap const &other);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &original);
	~FragTrap();
};

#endif
