/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 12:26:52 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 13:44:01 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	phonebook_menu(PhonebookSlots &slots)
{
	std::cout << "Enter a command: " << std::endl;
	std::cin >> slots.command;
	if (slots.command.compare("EXIT") == 0)
		return ;
	else if (slots.command.compare("ADD") == 0)
		phonebook_add_menu(slots);
	else if (slots.command.compare("SEARCH") == 0)
		phonebook_search_menu(slots);
	else
		phonebook_menu(slots);
}

int	main(void)
{
	PhonebookSlots slots;

	std::cout << "Welcome to your favorite crappy phonebook!" << std::endl;
	slots.full = false;
	slots.current_slot = 0;
	phonebook_menu(slots);
	return (0);
}