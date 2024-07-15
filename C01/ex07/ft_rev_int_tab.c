/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:26:51 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/13 14:16:47 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	cpt;

	cpt = 0;
	while (cpt < size)
	{
		temp = tab[cpt];
		tab[cpt] = tab[size -1];
		tab[size - 1] = temp;
		cpt++;
		size--;
	}
}
