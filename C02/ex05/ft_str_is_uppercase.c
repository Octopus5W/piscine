/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:48:41 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/14 19:48:46 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] < 'A' || str[cpt] > 'Z')
			return (0);
		cpt++;
	}
	return (1);
}