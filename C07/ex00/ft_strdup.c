/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 05:43:06 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/25 11:41:38 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*cp;

	count = 0;
	while (src[count] != '\0')
		count++;
	count++;
	cp = malloc(sizeof(char) * (count +1));
	if (cp == NULL)
		return (0);
	count = 0;
	while (src[count])
	{
		cp[count] = src[count];
		count++;
	}
	cp[count] = '\0';
	return (cp);
}
/*
#include <stdio.h>
int main ()
{
	char *a = "";
	printf("%s%s", a, ft_strdup(a));
}*/
