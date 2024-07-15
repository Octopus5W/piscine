/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:12:19 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/25 21:34:43 by hdelbeca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_lenght_of_tab_str(char **str, int size, int sep_size)
{
	int	tab_count;
	int	total_count;

	tab_count = 0;
	total_count = 0;
	while (tab_count < size)
	{
		total_count += ft_strlen(str[tab_count]);
		tab_count++;
	}
	return (total_count + ((tab_count) * sep_size));
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

char	*ft_strcat_sep(int count_size, int size, char *dest, char *sep)
{
	int	count;

	count = 0;
	if (count_size < size -1)
	{
		while (sep[count])
		{
			*dest = sep[count];
			dest++;
			count++;
		}
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*pstr;
	int		count_size;
	int		sep_size;

	sep_size = ft_strlen(sep);
	str = malloc(sizeof(char) * 
			(ft_lenght_of_tab_str(strs, size, sep_size) + 1));
	if (!str)
		return (0);
	pstr = str;
	count_size = 0;
	while (count_size < size)
	{
		str = ft_strcat(str, strs[count_size]);
		str = ft_strcat_sep(count_size, size, str, sep);
		count_size++;
	}
	*str = '\0';
	return (pstr);
}
/*
#include <stdio.h>
int main ()
{
	char *a[] = {"mdr", "lol", "haha"};
	char *b = ft_strjoin(3, a, "//");
	printf("<%s>\n", b);
	
	free(b);
}*/
