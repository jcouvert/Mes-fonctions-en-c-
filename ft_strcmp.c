/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/31 18:10:41 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/31 18:52:20 by jcouvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	else
	{
		ft_putchar((nbr % 10) + '0');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] -s2[i]);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char s1[] = "salut";
	char s2[] = "Bonsoir";

	ft_putnbr(ft_strcmp(s1, s2));
	ft_putchar('\n');
	return(0);
}
