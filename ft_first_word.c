/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 11:20:03 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/30 12:52:06 by jcouvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 1)
	{
		ft_putchar('\n');
	}
	else 
	{
		while (argv[1] != '\0')
		{
			if (argv[1][i] == " " || argv[1][i] == "	")
			{
				ft_putstr(&argv[1][i]);
				ft_putchar('\n');
				i++;
			}
		}
	}
	return (0);
}
