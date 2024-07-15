/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:34:02 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/14 19:48:10 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] >= 'a' && str[cpt] <= 'z')
			str[cpt] -= 32;
		cpt++;
	}
	return (str);
}
