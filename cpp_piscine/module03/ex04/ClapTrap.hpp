/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:27:01 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/25 17:11:05 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
    //Member functions
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
    std::string getName();

    //Constructors / Destructor / Assignment
    ClapTrap();
    ClapTrap    &operator=(ClapTrap const &other);
    ClapTrap    (ClapTrap   const &original);
    ClapTrap(std::string const &name);
    ~ClapTrap();

    protected:
    // Shared values.
    int			hit_points;
	int 		max_hit_points;
	int 		energy_points;
	int 		max_energy_points;
	int 		level;
	int 		melee_attack_damage;
	int 		ranged_attack_damage;
	int 		armor_damage_reduction;
	std::string	name;
};

#endif
