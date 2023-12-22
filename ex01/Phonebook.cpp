/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:41:47 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 04:04:34 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void	DisplayColumnString(std::string str);
static void	DisplayRowString(std::string col1, std::string col2, \
								std::string col3, std::string col4);

PhoneBook::PhoneBook(void)
{
	curContactSize = 0;
}

void	PhoneBook::AddContact(std::string firstName, std::string lastName, \
							std::string nickName, std::string phoneNumber, \
							std::string darkestSecret)
{
	
	contactArr[curContactSize % 8] = Contact(firstName, lastName, nickName, \
										phoneNumber, darkestSecret);
	std::cout << "New contact added successfuly on index " << \
					curContactSize % 8 + 1<< '\n';
	curContactSize++;
}

int	PhoneBook::GetContactArrSize(void)
{
	return (curContactSize);
}

void	PhoneBook::DisplayContactList(void)
{
	int					i;

	i = 0;
	DisplayRowString("index", "firstName", "lastName", "nickName");
	while (i < curContactSize && i < 8)
	{
		std::stringstream ss;
		ss << (i + 1);
		DisplayRowString(ss.str(),
						contactArr[i].GetFirstName(), 
						contactArr[i].GetLastName(),
						contactArr[i].GetNickName());
		i++;
	}
}

void	PhoneBook::DisplayContact(int index)
{
	contactArr[index - 1].PrintContact();
}

static void	DisplayColumnString(std::string str)
{
	int	i;
	int	len;

	len = str.length();
	if (str.length() > 10)
	{
		str[9] = '.';
		str[10] = '\0';
		std::cout << str;
	}
	else
	{
		std::cout << str;
		i = 0;
		while (i++ < 10 - len)
			std::cout << ' ';
	}
}

static void	DisplayRowString(std::string col1, std::string col2, \
								std::string col3, std::string col4)
{
	std::cout << '|';
	DisplayColumnString(col1);
	std::cout << '|';
	DisplayColumnString(col2);
	std::cout << '|';
	DisplayColumnString(col3);
	std::cout << '|';
	DisplayColumnString(col4);
	std::cout << '|';
	std::cout << '\n';
}
