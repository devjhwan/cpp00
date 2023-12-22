/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:15:43 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 04:01:57 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	strToUpperCase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (argv[i] != NULL)
		{
			strToUpperCase(argv[i]);
			std::cout << argv[i];
			i++;
		}
	}
	std::cout << '\n';
	return (0);
}
