/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbeca <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:43:59 by hdelbeca          #+#    #+#             */
/*   Updated: 2024/02/27 20:32:38 by hdelbeca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *dest, char *src)
{
	int	count;
	int	lenght;

	count = 0;
	lenght = ft_strlen(src);
	dest = malloc(sizeof(char) * (lenght + 1));
	if (!dest)
		return (0);
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			count;
	t_stock_str	*tab_struct;

	tab_struct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab_struct)
		return (NULL);
	count = 0;
	while (count < ac)
	{
		tab_struct[count].size = ft_strlen(av[count]);
		tab_struct[count].str = ft_strdup(tab_struct[count].str, av[count]);
		tab_struct[count].copy = ft_strdup(tab_struct[count].copy, av[count]);
		if (!tab_struct[count].str || !tab_struct[count].copy)
		{
			free(tab_struct);
			return (0);
		}
		count++;
	}
	tab_struct[count].size = 0;
	tab_struct[count].str = 0;
	tab_struct[count].copy = 0;
	return (tab_struct);
}
/*
int main (int ac, char *av[])
{
	printf("%d", ft_strs_to_tab(ac, av)[0].size);
	return 0;
}*/
