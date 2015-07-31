/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 11:49:49 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/31 13:37:04 by jcouvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = nbr *(-1);
		ft_putchar('-');
	}

	if (nbr < 10)
	{
		ft_putchar('0' + nbr);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10);
	}
}

int		main(void)
{
	int i;

	i = (-100);
	ft_putnbr(i);
	return (0);
}
