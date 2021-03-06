/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/01 21:30:03 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/04 22:44:07 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
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

	std::cout << std::endl << "ScavTrap Copy Constructor: " << std::endl << std::endl;
	ScavTrap lele(lilly);
	lele.takeDamage(2);

	std::cout << std::endl << "ScavTrap Assignment Operator: " << std::endl << std::endl;
	ScavTrap lolo;
	lolo = lele;
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

	std::cout << std::endl << "FragTrap Copy Constructor: " << std::endl << std::endl;
	FragTrap raffy(rufus);
	raffy.beRepaired(5);

	std::cout << std::endl << "FragTrap Assignment Operator: " << std::endl << std::endl;
	FragTrap reffel;
	reffel = raffy;
	reffel.meleeAttack("Randy");

	return (0);
}
