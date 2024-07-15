/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:00:56 by hdelbecq          #+#    #+#             */
/*   Updated: 2024/02/21 13:51:08 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	count;

	count = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (count <= nb / 2)
		{
			if (nb % count == 0)
				return (0);
			count++;
		}
		return (1);
	}
}
