/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:03:54 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/11 18:44:35 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_reverse(int nb)
{
	long	nb_return;

	nb_return = 1;
	while (nb != 0)
	{
		nb_return *= 10;
		nb_return += nb % 10;
		nb /= 10;
	}
	return (nb_return);
}

void	ft_print_number(long nb)
{
	int	mod;

	while (nb > 1)
	{
		mod = nb % 10 + 48;
		write(1, &mod, 1);
		nb /= 10;
	}
}

void	ft_putnbr(int nb)
{
	long	reverse_nb;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		reverse_nb = ft_reverse(nb);
		ft_print_number(reverse_nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(-100);
	ft_putnbr(0);
	ft_putnbr(100);
	ft_putnbr(2147483647);
	return (0);
}*/
