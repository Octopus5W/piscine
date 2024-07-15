/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:24:28 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 21:38:02 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_dest;
	unsigned int	l_src;

	l_dest = 0;
	l_src = 0;
	while (dest[l_dest] != '\0')
	{
		l_dest++;
	}
	if (l_dest > size)
		return (l_dest + size);
	while (src[l_src] != '\0' && l_dest + l_src < size - 1)
	{
		dest[l_dest + l_src] = src[l_src];
		l_src++;
	}
	dest[l_dest + l_src] = '\0';
	while (src[l_src] != '\0')
		l_src++;
	return (l_dest + l_src);
}
/*
int main ()
{
	char a[7] = "hello";
	char *b = "lol";
	int c = ft_strlcat(a, b, 8);
	return 0;
}*/
