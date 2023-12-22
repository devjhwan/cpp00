/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:01:40 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 03:59:01 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <sstream>

class PhoneBook
{
	private:
	Contact	contactArr[8];
	int		curContactSize;

	public:
	PhoneBook(void);
	void	AddContact(std::string firstName, std::string lastName, \
						std::string nickName, std::string phoneNumber, \
						std::string darkestSecret);
	int		GetContactArrSize(void);
	void	DisplayContactList(void);
	void	DisplayContact(int index);
};

#endif
