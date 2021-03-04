/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:58:28 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 19:38:30 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap lilly("lilly");

	lilly.beRepaired(22);
	lilly.challengeNewcomer();
	lilly.challengeNewcomer();
	lilly.challengeNewcomer();
	lilly.meleeAttack("rufus");
	lilly.rangedAttack("rudolf");
	lilly.takeDamage(43);
	lilly.takeDamage(55);
	lilly.meleeAttack("fred");
	lilly.takeDamage(44);
	lilly.beRepaired(22);
	lilly.meleeAttack("feddy");
	lilly.takeDamage(22);

	ScavTrap lele(lilly);
	ScavTrap lolo = lele;
	lele.takeDamage(2);
	lolo.beRepaired(5);

	FragTrap rufus("Rufus");

	rufus.rangedAttack("Austin");
	rufus.meleeAttack("Austin");
	rufus.takeDamage(104);
	rufus.beRepaired(50);
	rufus.vaulthunter_dot_exe("peanut");
	rufus.vaulthunter_dot_exe("peanut");
	rufus.vaulthunter_dot_exe("peanut");
	rufus.vaulthunter_dot_exe("peanut");
	rufus.vaulthunter_dot_exe("peanut");
	rufus.beRepaired(4);
	rufus.takeDamage(60);
	rufus.rangedAttack("peanut");
	rufus.meleeAttack("peanut");
	rufus.takeDamage(4);
	rufus.beRepaired(5);
	rufus.vaulthunter_dot_exe("peanut");

	FragTrap raffy(rufus);
	FragTrap reffel = raffy;

	raffy.beRepaired(5);
	return (0);
}