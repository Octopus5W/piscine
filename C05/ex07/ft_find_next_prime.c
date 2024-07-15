/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:00:05 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/26 19:23:24 by hdelbeca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	while (count <= nb / count)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;
	int	count;

	is_prime = ft_is_prime(nb);
	count = 0;
	if (nb <= 2)
		return (2);
	while (is_prime == 0)
	{
		count++;
		if ((nb + count) % 2 != 0)
			is_prime = ft_is_prime(nb + count);
	}
	return (nb + count);
}
/*
#include <stdio.h>
int main ()
{
	ft_find_next_prime(2000000000);
}*/
