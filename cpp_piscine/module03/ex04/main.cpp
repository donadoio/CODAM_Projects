/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 16:58:28 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/05 00:37:13 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	std::cout << std::endl << "NinjaTrap instance Willy: " << std::endl << std::endl;
    NinjaTrap willy("Willy");
	
	std::cout << std::endl << "SuperTrap instance Simon: " << std::endl << std::endl;
    SuperTrap simon("Simon");

	simon.beRepaired(22);
	simon.meleeAttack("rufus");
	simon.rangedAttack("rudolf");
	simon.takeDamage(43);
	simon.ninjaShoeBox(willy);
	simon.vaulthunter_dot_exe("Willy");
	simon.vaulthunter_dot_exe("Willy");
	simon.beRepaired(5);
	simon.takeDamage(55);
	simon.meleeAttack("fred");
	simon.takeDamage(44);
	simon.beRepaired(22);
	simon.meleeAttack("feddy");
	simon.takeDamage(22);

	std::cout << std::endl << "Copy Constructor for SuperTrap: " << std::endl << std::endl;
	SuperTrap lele(simon);

	std::cout << std::endl << "Assignment operator for SuperTrap: " << std::endl << std::endl;
	SuperTrap lolo;
	lolo = lele;

	std::cout << std::endl << "takeDamage() on copied SuperTrap class, beRepaired() on assigned class after it's dead: " << std::endl << std::endl;
	lele.takeDamage(2);
	lolo.beRepaired(5);

	
	return (0);
}