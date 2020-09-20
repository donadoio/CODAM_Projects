/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook_utils.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: idonado <idonado@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/20 13:44:04 by idonado       #+#    #+#                 */
/*   Updated: 2020/09/20 16:42:53 by idonado       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	add_contact(PhonebookSlots &slots)
{
	std::cout << "Enter a first name: " << std::endl;
	std::cin >> slots.firstname[slots.current_slot];
	std::cout << "Enter a last name: " << std::endl;
	std::cin >> slots.lastname[slots.current_slot];
	std::cout << "Enter a nickname: " << std::endl;
	std::cin >> slots.nickname[slots.current_slot];
	slots.current_slot++;
	if (slots.current_slot > 7)
		slots.full = true;
}

void	phonebook_add_menu(PhonebookSlots &slots)
{
	if (slots.full == false)
	{
		add_contact(slots);
		phonebook_menu(slots);
	}
	else
	{
		std::cout << "I'm sorry, the Crappy Phonebook's contact list is full..."\
		 << std::endl << "redirecting to main menu." << std::endl;
		phonebook_menu(slots);
	}
}

void	phonebook_search_loop(std::string str)
{
	size_t	str_size;
	int		i;
	
	str_size = str.size();
	if (str_size == 10)
		std::cout << str;
	else if (str_size < 10)
	{
		i = 0;
		str_size = 10 - str_size;
		while (i < str_size)
		{
			std::cout << ' ';
			i++;
		}
		std::cout << str;
	}
	else
		std::cout << str.substr(0, 9) << '.';
}

void	phonebook_display_results(PhonebookSlots &slots, int num_input)
{
	std::cout << "   First name: " << slots.firstname[num_input] << std::endl;
	std::cout << "    Last name: " << slots.lastname[num_input] << std::endl;
	std::cout << "     Nickname: " << slots.nickname[num_input] << std::endl;
	std::cout << std::endl;
	phonebook_menu(slots);
}

void	phonebook_search_input(PhonebookSlots &slots)
{
	std::string	input;
	int			results;
	int			num_input;

	results = slots.current_slot - 1;
	std::cout << "Please insert an index number: " << std::endl;
	std::cin >> input;
	num_input = std::atoi(input.c_str());
	if (num_input >= 0 && num_input <= results && isdigit(input[0]) && input[1] == '\0')
		phonebook_display_results(slots, num_input);
	else
	{
		std::cout << "Invalid input, redirecting you to main menu... " << std::endl;
		phonebook_menu(slots);
	}
}

void	phonebook_search_menu(PhonebookSlots &slots)
{
	int		results;
	int		i;

	if (slots.current_slot != 0)
		results = slots.current_slot - 1;
	else
	{
		std::cout << "Contact list is empty, returning to main menu... " << std::endl;
		phonebook_menu(slots);
	}
	i = 0;
	std::cout << "     INDEX" << '|' << "FIRST NAME" << '|' << " LAST NAME" \
	<< '|' << "  NICKNAME" << std::endl;
	while (i <= results)
	{
		std::cout << "         " << i << '|';
		phonebook_search_loop(slots.firstname[i]);
		std::cout << '|';
		phonebook_search_loop(slots.lastname[i]);
		std::cout << '|';
		phonebook_search_loop(slots.nickname[i]);
		std::cout << std::endl;
		i++;
	}
	phonebook_search_input(slots);
}