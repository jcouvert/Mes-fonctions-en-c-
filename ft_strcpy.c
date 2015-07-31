/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcouvert <jcouvert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 20:00:12 by jcouvert          #+#    #+#             */
/*   Updated: 2015/07/31 16:54:39 by jcouvert         ###   ########.fr       */
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

char		*ft_strcpy(char *dest, char *src)
{
	int i;
	int length;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char src[] = "Alexxxx";
	char dest[] = "Yolo";
	
	ft_putstr(src);
	ft_putchar('\n');
	ft_putstr(dest);
	ft_putchar('\n');
	ft_putstr(ft_strcpy(dest, src));
	ft_putchar('\n');
	return (0);
}
