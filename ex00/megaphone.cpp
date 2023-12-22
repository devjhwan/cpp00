/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:15:43 by junghwle          #+#    #+#             */
/*   Updated: 2023/12/22 01:37:15 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	isLowcase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

void	printChar(char ch)
{
	std::cout << ch;
}

void	printStringUppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isLowcase(str[i]))
			printChar(str[i] - 32);
		else
			printChar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE";
	else
	{
		i = 1;
		while (argv[i] != NULL)
			printStringUppercase(argv[i++]);
	}
	std::cout << '\n';
	return (0);
}
