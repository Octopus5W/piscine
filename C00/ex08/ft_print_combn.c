/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:03:54 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/11 16:55:01 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	reverse_nb;
	int	mod;

	if (nb > 0)
	{
		reverse_nb = 1;
		while (nb != 0)
		{
			reverse_nb *= 10;
			reverse_nb += nb % 10;
			nb /= 10;
		}
		while (reverse_nb > 1)
		{
			mod = reverse_nb % 10 + 48;
			write(1, &mod, 1);
			reverse_nb /= 10;
		}
	}
}

int	ft_min_max(int min, int max)
{
	int	nb;

	if (min > 0)
	{
		nb = 1;
		while (min > 1)
		{
			nb *= 10;
			min--;
		}
	}
	if (max > 0)
	{
		nb = 0;
		while (max > 0)
		{
			nb *= 10;
			nb += 10 - max;
			max--;
		}
	}
	return (nb);
}

int	ft_set(int n)
{
	int	return_nb;
	int	cpt;

	return_nb = 0;
	cpt = 1;
	while (n > 1)
	{
		return_nb *= 10;
		return_nb += cpt;
		cpt++;
		n--;
	}
	return (return_nb);
}

int	ft_check(int nb)
{
	int	temp;

	temp = nb % 10;
	nb /= 10;
	while (nb != 0)
	{
		if (temp > nb % 10)
		{
			temp = nb % 10;
			nb /= 10;
		}
		else
			return (0);
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int	min;
	int	max;
	int	nb;
	int	check;

	min = ft_min_max(n, 0);
	max = ft_min_max(0, n);
	nb = ft_set(n);
	while (nb <= max)
	{
		check = ft_check(nb);
		if (check == 1)
		{
			if (nb < min)
				write(1, "0", 1);
			ft_putnbr(nb);
			if (nb != max)
				write(1, ", ", 2);
		}
		nb++;
	}
}
/*
int main (){
	ft_print_combn(5);
	return 0;
}
*/
