/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:47:15 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/15 20:59:26 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, int cpt, int nextup)
{
	if (str[cpt] >= 'A' && str[cpt] <= 'Z')
	{
		if (nextup == 0)
			str[cpt] += 32;
		nextup = 0;
	}
	else if (str[cpt] >= 'a' && str[cpt] <= 'z')
	{
		if (nextup == 1)
			str[cpt] -= 32;
		nextup = 0;
	}
	else if (str[cpt] >= '0' && str[cpt] <= '9')
		nextup = 0;
	else
		nextup = 1;
	return (nextup);
}

char	*ft_strcapitalize(char *str)
{
	int	cpt;
	int	nextup;

	cpt = 0;
	nextup = 1;
	while (str[cpt] != '\0')
	{
		nextup = check(str, cpt, nextup);
		cpt++;
	}
	return (str);
}
