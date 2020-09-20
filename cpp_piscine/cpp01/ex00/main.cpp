/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 23:42:57 by idonado       #+#    #+#                 */
/*   Updated: 2020/07/26 00:13:18 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony*	Rufus = new Pony("White", 1, 5);
	delete	Rufus;
}

void	ponyOnTheStack()
{
	Pony	Pedro("Black", 2, 6);
}

int	main(void)
{
	ponyOnTheHeap();
	std::cout << "Pony Rufus was created and killed." << std::endl;
	ponyOnTheStack();
	std::cout << "Pony Pedro was created and sent to the slaughterhouse." << std::endl;
	return (0);
}
