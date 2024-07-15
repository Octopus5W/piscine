/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:36:50 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/29 21:56:01 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_array
{
	int		size;
	char	*str;
}	t_array;

char	*ft_strdup(char *src, char *dest, int nb_c, int index)
{
	int	i;

	dest = malloc(sizeof(char) * (nb_c + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i] && i < nb_c)
	{
		dest[i] = src[i + index];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	check_charset(char carac, char *charset)
{
	int	count;

	count = 0;
	if (!charset)
		return (1);
	while (charset[count])
	{
		if (carac == charset[count])
			return (1);
		count++;
	}
	return (0);
}

int	nb_tab(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (!check_charset(str[i], charset) && \
				(!str[i + 1] || check_charset(str[i + 1], charset)))
			count++;
		i++;
	}
	return (count);
}

t_array	*set_struct(char *str, char *charset, t_array *tab)
{
	int	i_str;
	int	i_tab;
	int	count;

	i_str = 0;
	i_tab = 0;
	while (str[i_str])
	{
		count = 0;
		while (str[i_str + count] && \
				!check_charset(str[i_str + count], charset))
			count++;
		if (count > 0)
		{
			tab[i_tab].size = count;
			tab[i_tab].str = ft_strdup(str, tab[i_tab].str, count, i_str);
			i_tab++;
		}
		i_str += count;
		while (str[i_str] && check_charset(str[i_str], charset))
			i_str++;
	}
	tab[i_tab].str = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		sizeof_tab;
	int		i;
	t_array	*tab;
	char	**r_tab;

	i = 0;
	sizeof_tab = nb_tab(str, charset) + 1;
	if (!str || !charset)
		return (0); 
	tab = malloc(sizeof(t_array) * sizeof_tab);
	tab = set_struct(str, charset, tab);
	r_tab = malloc (sizeof(char *) * (sizeof_tab));
	while (i < sizeof_tab -1)
	{
		r_tab[i] = ft_strdup(tab[i].str, r_tab[i], tab[i].size, 0);
		i++;
	}
	r_tab[i] = 0;
	return (r_tab);
}
/*
int main (int ac, char **av)
{

	int i = ac;
	i = 0;

	char **lol = ft_split(av[1], av[2]);

	while(lol[i])
	{
		printf("<%s>\n", lol[i]);
		i++;
	}

		printf("<%s>\n", lol[i]);
	return (0);
}*/
