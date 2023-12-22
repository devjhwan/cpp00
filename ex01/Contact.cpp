/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:59:44 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 03:48:22 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::Contact(std::string firstName, std::string lastName, \
					std::string nickName, std::string phoneNumber, \
					std::string darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}
std::string	Contact::GetFirstName(void)
{
	return (_firstName);
}

std::string	Contact::GetLastName(void)
{
	return (_lastName);
}

std::string	Contact::GetNickName(void)
{
	return (_nickName);
}

void	Contact::PrintContact(void)
{
	std::cout << "First Name: " << _firstName << '\n';
	std::cout << "Last Name: " << _lastName << '\n';
	std::cout << "Nick Name: " << _nickName << '\n';
	std::cout << "Phone Number: " << _phoneNumber << '\n';
	std::cout << "Darkest Secret: " << _darkestSecret << '\n';
}
