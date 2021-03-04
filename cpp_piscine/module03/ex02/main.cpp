/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:58:28 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 22:16:58 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl << "ScavTrap instance Lilly: " << std::endl << std::endl;
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

	std::cout << std::endl << "Copy Constructor for ScavTrap: " << std::endl << std::endl;
	ScavTrap lele(lilly);

	std::cout << std::endl << "Assignment operator for ScavTrap: " << std::endl << std::endl;
	ScavTrap lolo;
	lolo = lele;

	std::cout << std::endl << "takeDamage() on copied ScavTrap class, beRepaired() on assigned class after it's dead: " << std::endl << std::endl;
	lele.takeDamage(2);
	lolo.beRepaired(5);

	std::cout << std::endl << "FragTrap instance Rufus: " << std::endl << std::endl;
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

	std::cout << std::endl << "Copy Constructor for FragTrap: " << std::endl << std::endl;
	FragTrap raffy(rufus);
	std::cout << std::endl << "Assignment operator for FragTrap: " << std::endl << std::endl;
	FragTrap reffel;
	reffel = raffy;

	std::cout << std::endl << "beRepaired() on copied class FragTrap after it's dead: " << std::endl << std::endl;
	raffy.beRepaired(5);

	std::cout << std::endl << "End of main() " << std::endl << std::endl;
	return (0);
}