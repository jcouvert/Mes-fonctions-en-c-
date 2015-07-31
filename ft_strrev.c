/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/27 09:10:48 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/27 09:24:38 by jcouvert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

char		ft_strrev(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	while (count >= 0)
	{
		ft_putchar(str[count]);
		count--;
	}
	return (*str);
}

int		main(void)
{
	char *str;

	str = "hello everybody";
	ft_strrev(str);
	ft_putchar('\n');
	return (0);
}
