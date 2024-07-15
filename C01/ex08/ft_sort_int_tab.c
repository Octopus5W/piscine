/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:26:51 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/08 20:17:33 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cpt1;
	int	cpt2;
	int	temp;

	cpt1 = 0;
	while (cpt1 < size)
	{
		cpt2 = cpt1 + 1;
		while (cpt2 < size)
		{
			if (tab[cpt1] > tab[cpt2])
			{
				temp = tab[cpt1];
				tab[cpt1] = tab[cpt2];
				tab[cpt2] = temp;
			}
			cpt2++;
		}
		cpt1++;
	}
}
