/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:18:21 by hdelbeca          #+#    #+#             */
/*   Updated: 2024/02/28 22:14:08 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i])
	{
		while (base[i])
		{
			j = i + 1;
			if (!base[1] || base[i] == '+' || base[i] == '-')
				return (0);
			while (base[j])
			{
				if (base[i] == base[j])
					return (0);
				j++;
			}
			i++;
		}
	}
	else
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	l_nbr;

	l_nbr = nbr;
	if (ft_check_base(base))
	{
		if (l_nbr < 0)
		{
			ft_putchar('-');
			l_nbr *= -1;
		}
		if (l_nbr >= ft_strlen(base))
			ft_putnbr_base(l_nbr / ft_strlen(base), base);
		ft_putchar(base[l_nbr % ft_strlen(base)]);
	}
}
/*
int main ()
{
	ft_putnbr_base(10, "0123456789");
}*/
