/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:50:53 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/07 21:45:10 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int nb)
{
	int	div;
	int	mod;

	div = nb / 10 + 48;
	write(1, &div, 1);
	mod = nb % 10 + 48;
	write(1, &mod, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_print_number(a);
			write(1, " ", 1);
			ft_print_number(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*
int main (){
	ft_print_comb2();
	return 0;
}
*/
