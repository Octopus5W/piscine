/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:36:21 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/25 13:14:34 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	cp_nb;
	long	reverse_nb;
	char	put_nb;

	cp_nb = nb;
	if (cp_nb < 0)
	{
		write(1, "-", 1);
		cp_nb *= -1;
	}
	else if (cp_nb == 0)
		write(1, "0", 1);
	reverse_nb = 1;
	while (cp_nb > 0)
	{
		reverse_nb *= 10;
		reverse_nb += cp_nb % 10;
		cp_nb /= 10;
	}
	while (reverse_nb > 1)
	{
		put_nb = 48 + reverse_nb % 10;
		reverse_nb /= 10;
		write(1, &put_nb, 1);
	}
}
/*
int main ()
{
	ft_putnbr(0);
	return 0;
}*/
