/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 09:27:25 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/31 21:03:43 by jcouvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar(-);
	}

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
	}
	else
	{
		ft_putchar((nbr % 10) + 48);
	}
}

int		ft_atoi(char *str)
{
	int r;
	int i;
	int is_neg;

	r = 0;
	i = 0;
	is_neg = 0;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] != '\0')
		{
			r = r * 10 + (str[i] - '0');
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (r);
}

int		main(void)
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(str));
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
