/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:03:32 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/23 02:32:10 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <cstdlib>
#include <limits>

static std::string	getUserInput(std::string prompt)
{
	std::string	userInputStr;

	std::cout << prompt;
	std::getline(std::cin, userInputStr);
	return (userInputStr);
}

static void	addContact(PhoneBook *phonebook)
{
	std::string	firstName;
	std::string	lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	while ((firstName = getUserInput("input > firstName > ")) == "" && \
			!std::cin.eof());
	while ((lastName = getUserInput("input > lastName > ")) == "" && \
			!std::cin.eof());
	while ((nickName = getUserInput("input > nickName > ")) == "" && \
			!std::cin.eof());
	while ((phoneNumber = getUserInput("input > phoneNumber > ")) == "" && \
			!std::cin.eof());
	while ((darkestSecret = getUserInput("input > darkestSecret > ")) == "" && \
			!std::cin.eof());
	phonebook->AddContact(firstName, lastName, nickName, \
							phoneNumber, darkestSecret);
}

static bool	isNumber(std::string str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0')
		if (!std::isdigit(str[i++]))
			return (false);
	return (true);
}

static bool	isOutOfRange(int index, int maxRange)
{
	return (index <= 0 || index > maxRange);
}

static void	searchContact(PhoneBook phonebook)
{
	std::string	input;
	int			index;
	int			contactArrSize;

	phonebook.DisplayContactList();
	contactArrSize = phonebook.GetContactArrSize();
	while (contactArrSize > 0)
	{
		input = getUserInput("input > index > ");
		if (std::cin.eof())
			break ;
		if (!isNumber(input))
		{
			std::cout << "Write an valid number\n";
			continue ;
		}
		index = std::atoi(input.c_str());
		if (isOutOfRange(index, contactArrSize))
		{
			std::cout << "Out of range\n";
			continue ;
		}
		break;
	}
	if (!isOutOfRange(index, contactArrSize))
		phonebook.DisplayContact(index);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	userInputStr;
	
	while (1)
	{
		userInputStr = getUserInput("input> ");
		if (std::cin.eof())
			break ;
		if (userInputStr == "ADD")
			addContact(&phonebook);
		else if (userInputStr == "SEARCH")
			searchContact(phonebook);
		else if (userInputStr == "EXIT")
			break ;
	}
}
