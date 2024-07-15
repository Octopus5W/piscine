/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:45:46 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 14:40:53 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char a[6] = "hel";
	char b[] = "lo";
	char *c = ft_strcat(a, b);
	printf("%s %s", a, c);
	char d[6] = "hel";
	char e[] = "lo";
	char *f = strcat(d, e);
	printf("%s %s", d, f);
	return 0;
}*/
