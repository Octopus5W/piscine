/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:45:46 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 21:03:17 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*point;
	unsigned int	cpt;

	point = dest;
	cpt = 0;
	while (*dest)
		dest++;
	while (*src && cpt < nb)
	{
		*dest = *src;
		dest++;
		src++;
		cpt++;
	}
	*dest = '\0';
	return (point);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
	char a[6] = "hel";
	char b[] = "lo";
	char *c = ft_strncat(a, b, 1);
	printf("%s %s", a, c);
	char d[6] = "hel";
	char e[] = "lo";
	char *f = strncat(d, e, 1);
	printf("%s %s", d, f);
	return 0;
}*/
