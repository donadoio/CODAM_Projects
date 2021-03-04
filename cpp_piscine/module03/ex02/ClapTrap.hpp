/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:27:01 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 19:05:13 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
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
    ClapTrap();

    public:
    //Member functions
    void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

    //Constructors / Destructor / Assignment
    ClapTrap    &operator=(ClapTrap const &other);
    ClapTrap    (ClapTrap   const &original);
    ClapTrap(std::string const &name);
    ~ClapTrap();

    protected:
    // Getters & Setters
    std::string const   &getName() const;
    int                 getEnergy();
    int                 getHealth();
    void                setEnergy(int energy);
    void                setHealth(int health);
    void                setMaxEnergy(int energy);
    void                setMelee(int amount);
    void                setRanged(int amount);
    void                setArmor(unsigned int amount);
};

#endif
