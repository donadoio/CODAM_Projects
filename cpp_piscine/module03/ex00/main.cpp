/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/24 18:55:06 by idonado       #+#    #+#                 */
/*   Updated: 2021/03/01 15:59:08 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap lilly("Lilly");

	lilly.rangedAttack("Austin");
	lilly.meleeAttack("Austin");
	lilly.takeDamage(104);
	lilly.beRepaired(50);
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.vaulthunter_dot_exe("peanut");
	lilly.beRepaired(4);
}