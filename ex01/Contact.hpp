/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:58:04 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 03:46:54 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, \
				std::string nickName, std::string phoneNumber, \
				std::string darkestSecret);
		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickName(void);
		void		PrintContact(void);
};
#endif
