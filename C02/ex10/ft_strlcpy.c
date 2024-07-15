/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:49:19 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/19 14:24:59 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cpt;
	int				i;

	cpt = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		while (src[cpt] != '\0' && cpt < size - 1)
		{
			dest[cpt] = src[cpt];
			cpt++;
		}
		dest[cpt] = '\0';
	}
	return (i);
}
